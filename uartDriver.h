/*
 * uartDriver.h
 *
 *  Created on: Sep 27, 2023
 *      Author: Jean-Roch
 */

#ifndef UARTDRIVER_H_
#define UARTDRIVER_H_

#include "main.h"

int32_t uartDriverInit(void);
int32_t uartDriverLock(void);
int32_t uartDriverUnlock(void);
int32_t uartDriverSendString(char* stringToSend);

#endif /* UARTDRIVER_H_ */
