#ifndef COMM_H
#define COMM_H

#include "driverlib.h"
#include "board.h"
#include "FreeRTOS.h"
#include "queue.h"
#include "task.h"

typedef struct {
    uint16_t command[5];
    uint16_t value[10];
}rcvd_t;
//create task
void SCITaskInit(void);

#endif
