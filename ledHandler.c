/*
 * ledHandler.c
 *
 *  Created on: Sep 12, 2023
 *      Author: Jean-Roch
 */

#include "ledHandler.h"
#include "main.h"
#include "gpio.h"
#include "cmsis_os.h"
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "timers.h"

#define LED_LED_K0_DEFFAULT_PERIOD	100

TaskHandle_t task_handle;
TimerHandle_t ledHandlerTimer;

/*
 * - Créer et initialiser un timer (Timer FreeRTOS) "ledHandlerTimer"
 * - Créer et initialiser une tâche "ledHandlerK0Task"
 * - Utilier le Timer pour notifier la tâche "ledHandlerK0Task" toute les LED_LED_K0_DEFAULT_PERIOD ms
 * - Utiliser la tâche "ledHandlerK0Task" pour changer l'état de la LED K0 à chaque fois qu'elle (la tâche)
 *   reçoit une notification.
 * - Compléter la la fonction ledHandlerInit()
 */

/*
 * Compléter la tâche "ledHandlerK0Task" afin de changer l'état de la LED K0 à chaque fois qu'elle (la tâche)
 * reçoit une notification.
 */
void ledHandlerK0Task(void* param)
{
	while(1)
	{
		ulTaskNotifyTake(pdTRUE, portMAX_DELAY);
		HAL_GPIO_TogglePin(IO_LED_K0_GPIO_Port, IO_LED_K0_Pin);
	}
}

/*
 * Completer la fonction "ledHandlerInit"
 */
int32_t ledHandlerInit(void)
{
	ledHandlerTimer = xTimerCreate("ledHandlerTimer", LED_LED_K0_DEFFAULT_PERIOD, pdTRUE, 0, ledHandlerK0Task);
	xTimerStart(ledHandlerTimer, portMAX_DELAY);

	if (xTaskCreate(ledHandlerK0Task, "LED_K0_TASK", 128, 0, osPriorityNormal, &task_handle)!=pdPASS)
			return -1;

	return 0;
}

void vCallbackFunction( TimerHandle_t xTimer )
{
	if(task_handle != NULL)
	{
		xTaskNotifyGive(task_handle);
	}

	return;
}
