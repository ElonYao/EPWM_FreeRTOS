#ifndef COMM_H
#define COMM_H

#include "driverlib.h"
#include "board.h"
#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"
#include "string.h"
#include <ctype.h>
#include <stdlib.h>
typedef struct {
    uint16_t dataBuffer[10];
    uint16_t bufIndex;
    uint32_t command;
    float32_t parameter;
    uint16_t tokens[2];
}rcvd_t;
//create task
void SCITaskInit(void);

#endif
