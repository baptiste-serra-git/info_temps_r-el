/*
 * userLcd.h
 *
 *  Created on: 17 mars 2023
 *      Author: vaille
 */

#ifndef USERLCD_H_
#define USERLCD_H_

#include <stdint.h>
#include "lcd.h"

extern Lcd_t userLcd;


void userLcdInit(void);
void userLcdLock(void);
void userLcdUnlock(void);

#endif /* USERLCD_H_ */
