/*
 * testTasks.c
 *
 *  Created on: Sep 27, 2023
 *      Author: Jean-Roch
 */

#include "testTasks.h"
#include "FreeRTOS.h"
#include "task.h"
#include "cmsis_os.h"
#include "uartDriver.h"
#include "stdio.h"
#include "userLcd.h"


/*
 * La tâche "testTask_01" doit permettre d'afficher la valeur de "xTaskGetTickCount()" toutes les 100ms
 * en haut à droite de l'écran LCD
 */
void testTask_01(void *param)
{
	TickType_t tick = 0;
		while (1){
			tick = xTaskGetTickCount();
			userLcdLock();
			lcdLocate(&userLcd, 8, 0);
			lcdPrintf(&userLcd, "%08d", tick);
			userLcdUnlock();
		}
}



int32_t testTasksInit(void)
{
	if (xTaskCreate(testTask_01, "TEST_TASK_1", 128, 0, osPriorityBelowNormal, 0)!=pdPASS)
		return -1;
	return 0;
}
