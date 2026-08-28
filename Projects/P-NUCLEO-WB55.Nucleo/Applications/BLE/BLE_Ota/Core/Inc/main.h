/**
  ******************************************************************************
  * @file    main.h
  * @author  MCD Application Team
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2019-2021 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32wbxx_hal.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
extern RTC_HandleTypeDef hrtc; /**< RTC handler declaration */

/* Exported macro ------------------------------------------------------------*/
/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

#define LED_GREEN_Pin GPIO_PIN_2
#define LED_GREEN_GPIO_Port GPIOA
#define LED_BLUE_Pin GPIO_PIN_5
#define LED_BLUE_GPIO_Port GPIOB
#define LED_RED_Pin GPIO_PIN_12
#define LED_RED_GPIO_Port GPIOC
#define PS3V3_Pin GPIO_PIN_13
#define PS3V3_GPIO_Port GPIOB
#define PS5V_Pin GPIO_PIN_14
#define PS5V_GPIO_Port GPIOB
#define MOD_Pin GPIO_PIN_9
#define MOD_GPIO_Port GPIOD
#define B4_Pin GPIO_PIN_0
#define B4_GPIO_Port GPIOA
#define B4_EXTI_IRQn EXTI0_IRQn

#endif /* __MAIN_H */
