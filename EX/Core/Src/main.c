/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.c
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */
void display7SEG(int num, GPIO_TypeDef *GPIOx, uint16_t Seg7a_Pin,
		uint16_t Seg7b_Pin, uint16_t Seg7c_Pin, uint16_t Seg7d_Pin,
		uint16_t Seg7e_Pin, uint16_t Seg7f_Pin, uint16_t Seg7g_Pin) {
	if (num == 0) {
		HAL_GPIO_WritePin(GPIOB, Seg7g_Pin, 1);
		HAL_GPIO_WritePin(GPIOB,
				Seg7a_Pin | Seg7b_Pin | Seg7c_Pin | Seg7d_Pin | Seg7e_Pin
						| Seg7f_Pin, 0);

	}
	if (num == 1) {
		HAL_GPIO_WritePin(GPIOB,
				Seg7a_Pin | Seg7d_Pin | Seg7e_Pin | Seg7f_Pin | Seg7g_Pin, 1);
		HAL_GPIO_WritePin(GPIOB, Seg7b_Pin | Seg7c_Pin, 0);
	}
	if (num == 2) {
		HAL_GPIO_WritePin(GPIOB, Seg7c_Pin | Seg7f_Pin, 1);
		HAL_GPIO_WritePin(GPIOB,
				Seg7a_Pin | Seg7b_Pin | Seg7d_Pin | Seg7e_Pin | Seg7g_Pin, 0);
	}
	if (num == 3) {
		HAL_GPIO_WritePin(GPIOB, Seg7e_Pin | Seg7f_Pin, 1);
		HAL_GPIO_WritePin(GPIOB,
				Seg7a_Pin | Seg7b_Pin | Seg7c_Pin | Seg7d_Pin | Seg7g_Pin, 0);
	}
	if (num == 4) {
		HAL_GPIO_WritePin(GPIOB, Seg7a_Pin | Seg7d_Pin | Seg7e_Pin, 1);
		HAL_GPIO_WritePin(GPIOB, Seg7b_Pin | Seg7c_Pin | Seg7f_Pin | Seg7g_Pin,
				0);
	}
	if (num == 5) {
		HAL_GPIO_WritePin(GPIOB, Seg7b_Pin | Seg7e_Pin, 1);
		HAL_GPIO_WritePin(GPIOB,
				Seg7a_Pin | Seg7c_Pin | Seg7d_Pin | Seg7f_Pin | Seg7g_Pin, 0);
	}
	if (num == 6) {
		HAL_GPIO_WritePin(GPIOB, Seg7b_Pin, 1);
		HAL_GPIO_WritePin(GPIOB,
				Seg7a_Pin | Seg7c_Pin | Seg7d_Pin | Seg7e_Pin | Seg7f_Pin
						| Seg7g_Pin, 0);
	}
	if (num == 7) {
		HAL_GPIO_WritePin(GPIOB, Seg7d_Pin | Seg7e_Pin | Seg7f_Pin | Seg7g_Pin,
				1);
		HAL_GPIO_WritePin(GPIOB, Seg7a_Pin | Seg7b_Pin | Seg7c_Pin, 0);
	}
	if (num == 8) {
		HAL_GPIO_WritePin(GPIOB,
				Seg7a_Pin | Seg7b_Pin | Seg7c_Pin | Seg7d_Pin | Seg7e_Pin
						| Seg7f_Pin | Seg7g_Pin, 0);
	}
	if (num == 9) {
		HAL_GPIO_WritePin(GPIOB, Seg7e_Pin, 1);
		HAL_GPIO_WritePin(GPIOB,
				Seg7a_Pin | Seg7b_Pin | Seg7c_Pin | Seg7d_Pin | Seg7f_Pin
						| Seg7g_Pin, 0);
	}

}
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  	int count = 0;
  	int count1 = 0;
  	int count2 = 0;
  	/* USER CODE END 2 */
  	/* Infinite loop */
  	/* USER CODE BEGIN WHILE */
  	HAL_GPIO_WritePin(GPIOB,
  			Led_a1_Pin | Led_b1_Pin | Led_c1_Pin | Led_d1_Pin | Led_e1_Pin
  					| Led_f1_Pin | Led_g1_Pin, 1);
  	HAL_GPIO_WritePin(GPIOB,
  			Led_a2_Pin | Led_b2_Pin | Led_c2_Pin | Led_d2_Pin | Led_e2_Pin
  					| Led_f2_Pin | Led_g2_Pin, 1);

  	HAL_GPIO_WritePin(GPIOA, Led_Red1_Pin | Led_Green1_Pin | Led_Yellow1_Pin,
  			GPIO_PIN_SET);
  	HAL_GPIO_WritePin(Led_Red1_GPIO_Port, Led_Red1_Pin, 0);

  	HAL_GPIO_WritePin(GPIOA, Led_Red2_Pin | Led_Green2_Pin | Led_Yellow2_Pin,
  			GPIO_PIN_SET);
  	HAL_GPIO_WritePin(Led_Green2_GPIO_Port, Led_Green2_Pin, 0);
  	while (1) {
  		/* USER CODE END WHILE */
  		/* USER CODE BEGIN 3 */
  		if (count == 0) {
  			count1 = 4;
  			count2 = 2;
  		}
  		if (count == 5) {
  			HAL_GPIO_WritePin(Led_Red1_GPIO_Port, Led_Red1_Pin, GPIO_PIN_SET);
  			HAL_GPIO_WritePin(Led_Green1_GPIO_Port, Led_Green1_Pin,
  					GPIO_PIN_RESET);
  			count1=2;
  		}
  		if (count == 8) {
  			HAL_GPIO_WritePin(Led_Green1_GPIO_Port, Led_Green1_Pin,
  					GPIO_PIN_SET);
  			HAL_GPIO_WritePin(Led_Yellow1_GPIO_Port, Led_Yellow1_Pin,
  					GPIO_PIN_RESET);
  			count1=1;
  		}

  		if (count == 3) {
  			HAL_GPIO_WritePin(Led_Green2_GPIO_Port, Led_Green2_Pin,
  					GPIO_PIN_SET);
  			HAL_GPIO_WritePin(Led_Yellow2_GPIO_Port, Led_Yellow2_Pin,
  					GPIO_PIN_RESET);
  			count2 = 1;
  		}
  		if (count == 5) {
  			HAL_GPIO_WritePin(Led_Yellow2_GPIO_Port, Led_Yellow2_Pin,
  					GPIO_PIN_SET);
  			HAL_GPIO_WritePin(Led_Red2_GPIO_Port, Led_Red2_Pin, GPIO_PIN_RESET);
  			count2 = 4;
  		}
  		display7SEG(count1, GPIOB, Led_a1_Pin, Led_b1_Pin, Led_c1_Pin,
  						Led_d1_Pin, Led_e1_Pin, Led_f1_Pin, Led_g1_Pin);
  				display7SEG(count2, GPIOB, Led_a2_Pin, Led_b2_Pin, Led_c2_Pin,
  						Led_d2_Pin, Led_e2_Pin, Led_f2_Pin, Led_g2_Pin);
  		count++;
  		count1--;
  		count2--;
  		HAL_Delay(1000);
  		if (count == 10) {
  							count=0;
  							HAL_GPIO_WritePin(Led_Yellow1_GPIO_Port, Led_Yellow1_Pin,
  									GPIO_PIN_SET);
  							HAL_GPIO_WritePin(Led_Red1_GPIO_Port, Led_Red1_Pin, GPIO_PIN_RESET);

  							HAL_GPIO_WritePin(Led_Red2_GPIO_Port, Led_Red2_Pin, GPIO_PIN_SET);
  							HAL_GPIO_WritePin(Led_Green2_GPIO_Port, Led_Green2_Pin,
  									GPIO_PIN_RESET);
  		}
  		/* USER CODE END 3 */
  	}
  	/* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, Led_Red1_Pin|Led_Yellow1_Pin|Led_Green1_Pin|Led_Red2_Pin
                          |Led_Yellow2_Pin|Led_Green2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, Led_a1_Pin|Led_b1_Pin|Led_c1_Pin|Led_d2_Pin
                          |Led_e2_Pin|Led_f2_Pin|Led_g2_Pin|Led_d1_Pin
                          |Led_e1_Pin|Led_f1_Pin|Led_g1_Pin|Led_a2_Pin
                          |Led_b2_Pin|Led_c2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : Led_Red1_Pin Led_Yellow1_Pin Led_Green1_Pin Led_Red2_Pin
                           Led_Yellow2_Pin Led_Green2_Pin */
  GPIO_InitStruct.Pin = Led_Red1_Pin|Led_Yellow1_Pin|Led_Green1_Pin|Led_Red2_Pin
                          |Led_Yellow2_Pin|Led_Green2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : Led_a1_Pin Led_b1_Pin Led_c1_Pin Led_d2_Pin
                           Led_e2_Pin Led_f2_Pin Led_g2_Pin Led_d1_Pin
                           Led_e1_Pin Led_f1_Pin Led_g1_Pin Led_a2_Pin
                           Led_b2_Pin Led_c2_Pin */
  GPIO_InitStruct.Pin = Led_a1_Pin|Led_b1_Pin|Led_c1_Pin|Led_d2_Pin
                          |Led_e2_Pin|Led_f2_Pin|Led_g2_Pin|Led_d1_Pin
                          |Led_e1_Pin|Led_f1_Pin|Led_g1_Pin|Led_a2_Pin
                          |Led_b2_Pin|Led_c2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
	/* User can add his own implementation to report the HAL error return state */
	__disable_irq();
	while (1) {
	}
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
