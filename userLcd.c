/*
 * userLcd.c
 *
 *  Created on: 17 mars 2023
 *      Author: vaille
 */

#include "userLcd.h"
#include "gpio.h"
#include "FreeRTOS.h"
#include "semphr.h"

Lcd_t userLcd;

SemaphoreHandle_t countMutex;

void userLcdInit(void)
{
	userLcd.data[0].port = IO_LCD_D4_GPIO_Port;
	userLcd.data[0].pin = IO_LCD_D4_Pin;
	userLcd.data[1].port = IO_LCD_D5_GPIO_Port;
	userLcd.data[1].pin = IO_LCD_D5_Pin;
	userLcd.data[2].port = IO_LCD_D6_GPIO_Port;
	userLcd.data[2].pin = IO_LCD_D6_Pin;
	userLcd.data[3].port = IO_LCD_D7_GPIO_Port;
	userLcd.data[3].pin = IO_LCD_D7_Pin;
	userLcd.enable.port = IO_LCD_E_GPIO_Port;
	userLcd.enable.pin = IO_LCD_E_Pin;
	userLcd.reset.port = IO_LCD_RS_GPIO_Port;
	userLcd.reset.pin = IO_LCD_RS_Pin;
	lcdInit(&userLcd);

	countMutex = xSemaphoreCreateMutex();
}

/*
 * Compléter la fonction "userLcdLock()" permettant de vérouiller l'accés à l'écran LCD
 * lorsque celui-ci est utilisé dans plusieurs tâche
 */
void userLcdLock(void)
{
	xSemaphoreTake(countMutex,50);
}

/*
 * Compléter la fonction "userLcdunlock()" permettant de dévérouiller l'accés à l'écran LCD.
 */
void userLcdUnlock(void)
{
	xSemaphoreGive(countMutex);
}
