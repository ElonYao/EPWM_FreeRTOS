#include "comm.h"

extern uint16_t SCIBuff[10];
QueueHandle_t xQueueSCI;
TaskHandle_t sciTaskHandle;
rcvd_t rcvdData={0};
////pseudocode
//1) usart ISR to read data
//2) data parsing(must be able to get floating number)
//3) command dispatch
__interrupt void INT_UART_RX_ISR(void)
{
    uint16_t data=0;
    BaseType_t xHigherPriorityTaskWoken = pdFALSE;
//    uint16_t fifoLevel=(uint16_t)SCI_getRxFIFOStatus(UART_BASE);
//
//    for(uint16_t index=0; index<fifoLevel;index++)
//    {
//        data = SCI_readCharBlockingFIFO(UART_BASE);
//        xQueueSendFromISR(xQueueSCI,&data,&xHigherPriorityTaskWoken);
//    }
    data = SCI_readCharBlockingFIFO(UART_BASE);
    xQueueSendFromISR(xQueueSCI,&data,&xHigherPriorityTaskWoken);

    SCI_clearOverflowStatus(UART_BASE);
    SCI_clearInterruptStatus(UART_BASE, SCI_INT_RXFF);
    Interrupt_clearACKGroup(INT_UART_RX_INTERRUPT_ACK_GROUP);

    portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
}
static void  dataParse(rcvd_t *data)
{
    uint16_t index=0;
    uint16_t tokenIndex=0;
    data->tokens[tokenIndex++]=&(data->dataBuffer[index]);
    while(data->dataBuffer[index]!=0x20)
    {
        index++;
    }
    data->dataBuffer[index]='\0';
    data->tokens[tokenIndex++]=&(data->dataBuffer[index+1]);
    data->command=(*(uint32_t*)data->tokens[0]);
    data->parameter=atof( data->tokens[1]);


}
static void commDispatch(rcvd_t *data)
{
    switch(data->command)
    {
        case 'A':
            EPWM_setCounterCompareValue(PWM1_BASE, EPWM_COUNTER_COMPARE_A,(uint16_t)(data->parameter*(-3.524f)+11869) );
            break;
        default:
            break;
    }


}
static void vDataProcessTask(void *pvPara)
{
    uint16_t rData=0,bufIndex=0;
    for(;;)
    {
        if(xQueueReceive(xQueueSCI, &rData, portMAX_DELAY)==pdTRUE)
        {
            //add the data into databuf
            if(rData!='\n')
            {
                rcvdData.dataBuffer[bufIndex++]=rData;
            }
            else
            {
                rcvdData.dataBuffer[bufIndex++]=rData;
                bufIndex=0;
                dataParse(&rcvdData);
                commDispatch(&rcvdData);

            }

        }

    }


}

void SCITaskInit(void)
{
    xQueueSCI=xQueueCreate(10,sizeof(uint16_t));
    xTaskCreate(vDataProcessTask,"dataProcessSCI",512,NULL,2,&sciTaskHandle);


}











