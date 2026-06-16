/*
 * ledHandler.h
 *
 *  Created on: Sep 12, 2023
 *      Author: Jean-Roch
 */

#ifndef LEDHANDLER_H_
#define LEDHANDLER_H_

#include <stdint.h>

int32_t ledHandlerInit(void);
int32_t ledHandlerSetPeriod(uint32_t period);

#endif /* LEDHANDLER_H_ */
