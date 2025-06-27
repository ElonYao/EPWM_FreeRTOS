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
    uint16_t fifoLevel=SCI_getRxFIFOStatus(UART_BASE);

    for(uint16_t index=0; index<fifoLevel;index++)
    {
        data = SCI_readCharBlockingFIFO(UART_BASE);
        xQueueSendFromISR(xQueueSCI,&data,&xHigherPriorityTaskWoken);
    }

    SCI_clearOverflowStatus(UART_BASE);
    SCI_clearInterruptStatus(UART_BASE, SCI_INT_RXFF);
    Interrupt_clearACKGroup(INT_UART_RX_INTERRUPT_ACK_GROUP);

    portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
}

static void vSCIDataParseTask(void *pvPara)
{
    uint16_t rData=0;
    for(;;)
    {
        //pending
    }


}

void SCITaskInit(void)
{

    xTaskCreate(vSCIDataParseTask,"dataProcessSCI",256,NULL,2,&sciTaskHandle);


}











