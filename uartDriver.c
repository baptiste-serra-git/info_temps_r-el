/*
 * uartDriver.c
 *
 *  Created on: Sep 27, 2023
 *      Author: Jean-Roch
 */

#include "uartDriver.h"
#include "usart.h"
#include <string.h>
#include "FreeRTOS.h"
#include "semphr.h"

#define UART_DRIVER_LOCK_TIMEOUT 		50
#define UART_DRIVER_TRANSMIT_TIMEOUT 	50

SemaphoreHandle_t uartDriverMutex;

/*
 * Faire les modification afin d'obtenir le comportement attendu
 */

/*
 * Initialisation du module "uartDriver"
 */
int32_t uartDriverInit(void)
{
	return 0;
}

/*
 * Vérouillage de la ressource (uart3)
 */
int32_t uartDriverLock(void)
{
	return 0;
}

/*
 * Dévérouillage de la ressource (uart3)
 */
int32_t uartDriverUnlock(void)
{
	return 0;
}

/*
 * Envoie d'une chaine de carractère vers l'UART3
 */
int32_t uartDriverSendString(char *stringToSend)
{
	uint32_t len = strlen((char*) stringToSend);
	int32_t ret = HAL_UART_Transmit(&huart3, (uint8_t*) stringToSend, len,
			UART_DRIVER_TRANSMIT_TIMEOUT);
	return ret;
}
