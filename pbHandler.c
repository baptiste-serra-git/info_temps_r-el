/*
 * pbHandler.c
 *
 *  Created on: Sep 13, 2023
 *      Author: Jean-Roch
 */

#include "pbHandler.h"
#include "main.h"
#include "gpio.h"
#include "FreeRTOS.h"
#include "task.h"
#include "semphr.h"
#include "cmsis_os.h"
#include "ledHandler.h"
#include "lcd.h"
#include "userLcd.h"


#define PB_HANDLER_SAMPLE_PERIOD 10



/*
 * Créer une tâche "pbHandlerK1Task" permettant d'incrémenter
 * un compteur à chaque appui sur le bouton Poussoir K1
 * et d'afficher sa valeur en haut à gauche de l'écran LCD
 */

void pbHandlerK1Task(void *param)
{
		uint32_t State = 0;
			uint32_t count = 0;
			lcdLocate(&userLcd, 0, 0);
			lcdPrintf(&userLcd, "%03d", count);
			while(1)
			{
				vTaskDelay(PB_HANDLER_SAMPLE_PERIOD);
				uint32_t pb_value = HAL_GPIO_ReadPin(IO_PB_K1_GPIO_Port, IO_PB_K1_Pin);
				switch (State)
				{
				case 0:
					if(!pb_value){
						State = 1;
						userLcdLock();
						lcdLocate(&userLcd, 0, 0);
						lcdPrintf(&userLcd, "%03d", count);
						userLcdUnlock();
						count++;
					}
					break;

				case 1:
					if(pb_value)
					{
						State = 0;

					}
					break;

				default:
					State = 0;
					break;
				}
			}
}

/*
 * Compléter la fonction "pbHandlerInit"
 */
int32_t pbHandlerInit(void)
{
	if (xTaskCreate(pbHandlerK1Task, "PB1_TASK", 128, 0, osPriorityNormal, 0)!=pdPASS)
			return -1;
	return 0;
}
