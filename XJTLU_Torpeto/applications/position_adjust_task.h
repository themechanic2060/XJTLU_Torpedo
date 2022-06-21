#ifndef POSITION_ADJUST_TASK_H
#define POSITION_ADJUST_TASK_H

#include "stm32f4xx_hal.h"
#include "struct_typedef.h"

#include "cmsis_os.h"
#include "Torpedo_data.h"

extern Torpedo_data_t torpedo_data[Torpedo_number];
extern uint8_t torpedo_num;
extern uint8_t choose_flag;

extern void adjust_task(void const * argument);


#endif