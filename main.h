/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f3xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define IO_LED_K0_Pin GPIO_PIN_4
#define IO_LED_K0_GPIO_Port GPIOE
#define IO_LED_K1_Pin GPIO_PIN_5
#define IO_LED_K1_GPIO_Port GPIOE
#define IO_LED_K2_Pin GPIO_PIN_6
#define IO_LED_K2_GPIO_Port GPIOE
#define IO_PB_NUC_Pin GPIO_PIN_13
#define IO_PB_NUC_GPIO_Port GPIOC
#define MCO_Pin GPIO_PIN_0
#define MCO_GPIO_Port GPIOF
#define IO_PB_K0_Pin GPIO_PIN_2
#define IO_PB_K0_GPIO_Port GPIOC
#define IO_PB_K1_Pin GPIO_PIN_3
#define IO_PB_K1_GPIO_Port GPIOC
#define IO_LED_NUC_GREEN_Pin GPIO_PIN_0
#define IO_LED_NUC_GREEN_GPIO_Port GPIOB
#define IO_SW_K0_Pin GPIO_PIN_0
#define IO_SW_K0_GPIO_Port GPIOG
#define IO_SW_K1_Pin GPIO_PIN_1
#define IO_SW_K1_GPIO_Port GPIOG
#define IO_LED_K3_Pin GPIO_PIN_7
#define IO_LED_K3_GPIO_Port GPIOE
#define IO_LED_K4_Pin GPIO_PIN_8
#define IO_LED_K4_GPIO_Port GPIOE
#define IO_LED_K5_Pin GPIO_PIN_9
#define IO_LED_K5_GPIO_Port GPIOE
#define IO_LED_K6_Pin GPIO_PIN_10
#define IO_LED_K6_GPIO_Port GPIOE
#define IO_LED_K7_Pin GPIO_PIN_11
#define IO_LED_K7_GPIO_Port GPIOE
#define IO_LED_K8_Pin GPIO_PIN_12
#define IO_LED_K8_GPIO_Port GPIOE
#define IO_LED_K9_Pin GPIO_PIN_13
#define IO_LED_K9_GPIO_Port GPIOE
#define IO_LED_K10_Pin GPIO_PIN_14
#define IO_LED_K10_GPIO_Port GPIOE
#define IO_LED_K11_Pin GPIO_PIN_15
#define IO_LED_K11_GPIO_Port GPIOE
#define IO_LED_NUC_RED_Pin GPIO_PIN_14
#define IO_LED_NUC_RED_GPIO_Port GPIOB
#define STLK_RX_Pin GPIO_PIN_8
#define STLK_RX_GPIO_Port GPIOD
#define STLK_TX_Pin GPIO_PIN_9
#define STLK_TX_GPIO_Port GPIOD
#define IO_LCD_E_Pin GPIO_PIN_11
#define IO_LCD_E_GPIO_Port GPIOD
#define IO_LCD_D4_Pin GPIO_PIN_12
#define IO_LCD_D4_GPIO_Port GPIOD
#define IO_LCD_D5_Pin GPIO_PIN_13
#define IO_LCD_D5_GPIO_Port GPIOD
#define IO_LCD_D6_Pin GPIO_PIN_14
#define IO_LCD_D6_GPIO_Port GPIOD
#define IO_LCD_D7_Pin GPIO_PIN_15
#define IO_LCD_D7_GPIO_Port GPIOD
#define IO_SW_K2_Pin GPIO_PIN_2
#define IO_SW_K2_GPIO_Port GPIOG
#define IO_SW_K3_Pin GPIO_PIN_3
#define IO_SW_K3_GPIO_Port GPIOG
#define USB_PowerSwitchOn_Pin GPIO_PIN_6
#define USB_PowerSwitchOn_GPIO_Port GPIOG
#define USB_OverCurrent_Pin GPIO_PIN_7
#define USB_OverCurrent_GPIO_Port GPIOG
#define USB_DM_Pin GPIO_PIN_11
#define USB_DM_GPIO_Port GPIOA
#define USB_DP_Pin GPIO_PIN_12
#define USB_DP_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define IO_LCD_RS_Pin GPIO_PIN_6
#define IO_LCD_RS_GPIO_Port GPIOD
#define IO_LCD_RW_Pin GPIO_PIN_7
#define IO_LCD_RW_GPIO_Port GPIOD
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define IO_LED_NUC_BLUE_Pin GPIO_PIN_7
#define IO_LED_NUC_BLUE_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
