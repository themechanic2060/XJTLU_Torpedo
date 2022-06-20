#ifndef STEPMOTOR_POSITION_RESET_TASK
#define STEPMOTOR_POSITION_RESET_TASK

#include "stm32f4xx_hal.h"
#include "struct_typedef.h"

#include "cmsis_os.h"
#include "remote_control.h"

extern RC_ctrl_t rc_ctrl;
extern int yaw_position;
extern int pitch_position;

extern void step_motor_reset_task(void const * argument);


#endif