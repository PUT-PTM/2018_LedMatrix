#include "stm32f4xx_hal.h"
#include "spi.h"
#include "gpio.h"
#include "ws2812b.h"
#include "lighting.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void SystemClock_Config(void);











void wariacja ()
{




	HAL_Init();
	SystemClock_Config();
	MX_GPIO_Init();
	MX_SPI1_Init();

	ws2812b_config led_strip_c = ws2812b_init(&hspi1, 256);
	lighting_config l_c = lighting_init(256);
	lighting_hsv from_color, to_color;


	void zgas()
	{
		from_color.power = 0;
		to_color.power = 0;
		lighting_draw_gradient_hsv(&l_c, 0, 255, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		from_color.power = 0.3;
	}

	from_color.saturation = 1;


	while(1)
	{

		int okienko;
		okienko = rand() % 225 +1;
		switch(okienko)
		{
		case 1:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 0, from_color);
			lighting_set_diode_color_hsv(&l_c,1 , from_color);
			lighting_set_diode_color_hsv(&l_c, 30, from_color);
			lighting_set_diode_color_hsv(&l_c, 31, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 2:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 1, from_color);
			lighting_set_diode_color_hsv(&l_c,2 , from_color);
			lighting_set_diode_color_hsv(&l_c, 30, from_color);
			lighting_set_diode_color_hsv(&l_c, 29, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 3:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 2, from_color);
			lighting_set_diode_color_hsv(&l_c,3, from_color);
			lighting_set_diode_color_hsv(&l_c, 29, from_color);
			lighting_set_diode_color_hsv(&l_c, 28, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 4:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 3, from_color);
			lighting_set_diode_color_hsv(&l_c,4 , from_color);
			lighting_set_diode_color_hsv(&l_c, 28, from_color);
			lighting_set_diode_color_hsv(&l_c, 27, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 5:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 4, from_color);
			lighting_set_diode_color_hsv(&l_c,5 , from_color);
			lighting_set_diode_color_hsv(&l_c, 27, from_color);
			lighting_set_diode_color_hsv(&l_c, 26, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 6:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 5, from_color);
			lighting_set_diode_color_hsv(&l_c,	6 , from_color);
			lighting_set_diode_color_hsv(&l_c, 26, from_color);
			lighting_set_diode_color_hsv(&l_c, 25, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 7:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 6, from_color);
			lighting_set_diode_color_hsv(&l_c,7, from_color);
			lighting_set_diode_color_hsv(&l_c, 25, from_color);
			lighting_set_diode_color_hsv(&l_c, 24, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 8:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 7, from_color);
			lighting_set_diode_color_hsv(&l_c,8 , from_color);
			lighting_set_diode_color_hsv(&l_c, 24, from_color);
			lighting_set_diode_color_hsv(&l_c, 23, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 9:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 8, from_color);
			lighting_set_diode_color_hsv(&l_c,9 , from_color);
			lighting_set_diode_color_hsv(&l_c, 23, from_color);
			lighting_set_diode_color_hsv(&l_c, 22, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 10:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 9, from_color);
			lighting_set_diode_color_hsv(&l_c,10 , from_color);
			lighting_set_diode_color_hsv(&l_c, 22, from_color);
			lighting_set_diode_color_hsv(&l_c, 21, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 11:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 10, from_color);
			lighting_set_diode_color_hsv(&l_c,11 , from_color);
			lighting_set_diode_color_hsv(&l_c, 21, from_color);
			lighting_set_diode_color_hsv(&l_c, 20, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 12:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 11, from_color);
			lighting_set_diode_color_hsv(&l_c,12 , from_color);
			lighting_set_diode_color_hsv(&l_c, 20, from_color);
			lighting_set_diode_color_hsv(&l_c, 19, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 13:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 12, from_color);
			lighting_set_diode_color_hsv(&l_c,13 , from_color);
			lighting_set_diode_color_hsv(&l_c, 19, from_color);
			lighting_set_diode_color_hsv(&l_c, 18, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 14:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 13, from_color);
			lighting_set_diode_color_hsv(&l_c,14 , from_color);
			lighting_set_diode_color_hsv(&l_c, 18, from_color);
			lighting_set_diode_color_hsv(&l_c, 17, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 15:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 14, from_color);
			lighting_set_diode_color_hsv(&l_c,15 , from_color);
			lighting_set_diode_color_hsv(&l_c, 17, from_color);
			lighting_set_diode_color_hsv(&l_c, 16, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		} //2 rzad
		case 16:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,31 , from_color);
			lighting_set_diode_color_hsv(&l_c,30 , from_color);
			lighting_set_diode_color_hsv(&l_c,32 , from_color);
			lighting_set_diode_color_hsv(&l_c,33, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 17:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,29 , from_color);
			lighting_set_diode_color_hsv(&l_c,30 , from_color);
			lighting_set_diode_color_hsv(&l_c,34 , from_color);
			lighting_set_diode_color_hsv(&l_c,33, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 18:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,29 , from_color);
			lighting_set_diode_color_hsv(&l_c,28 , from_color);
			lighting_set_diode_color_hsv(&l_c,34 , from_color);
			lighting_set_diode_color_hsv(&l_c,35, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 19:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,28 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,27 , from_color);
			lighting_set_diode_color_hsv(&l_c,35 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,36, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 20:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,26 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,27 , from_color);
			lighting_set_diode_color_hsv(&l_c,37 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,36, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 21:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,26 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,25 , from_color);
			lighting_set_diode_color_hsv(&l_c,37 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,38, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 22:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,25 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,24 , from_color);
			lighting_set_diode_color_hsv(&l_c,38 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,39, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}

		case 23:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,23 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,24 , from_color);
			lighting_set_diode_color_hsv(&l_c,40 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,39, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 24:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,23 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,22 , from_color);
			lighting_set_diode_color_hsv(&l_c,40 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,41, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 25:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,21 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,22 , from_color);
			lighting_set_diode_color_hsv(&l_c,42 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,41, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 26:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,21 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,20 , from_color);
			lighting_set_diode_color_hsv(&l_c,42 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,43, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 27:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,19 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,20 , from_color);
			lighting_set_diode_color_hsv(&l_c,44 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,43, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 28:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,19 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,18 , from_color);
			lighting_set_diode_color_hsv(&l_c,44 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,45, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 29:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,17 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,18 , from_color);
			lighting_set_diode_color_hsv(&l_c,46 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,45, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 30:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,17 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,16 , from_color);
			lighting_set_diode_color_hsv(&l_c,46 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,47, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 31:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,32 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,33 , from_color);
			lighting_set_diode_color_hsv(&l_c,62 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,63, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 32:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,34 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,33 , from_color);
			lighting_set_diode_color_hsv(&l_c,62 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,61, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 33:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,34 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,35 , from_color);
			lighting_set_diode_color_hsv(&l_c,61 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,60, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 34:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,35 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,36 , from_color);
			lighting_set_diode_color_hsv(&l_c,60 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,59, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 35:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,36 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,37 , from_color);
			lighting_set_diode_color_hsv(&l_c,59 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,58, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 36:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,37 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,38 , from_color);
			lighting_set_diode_color_hsv(&l_c,58 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,57, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 37:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,38 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,39 , from_color);
			lighting_set_diode_color_hsv(&l_c,57 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,56, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 38:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,39 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,40 , from_color);
			lighting_set_diode_color_hsv(&l_c,55 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,56, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 39:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,40 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,41 , from_color);
			lighting_set_diode_color_hsv(&l_c,55 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,54, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 40:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,41 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,42 , from_color);
			lighting_set_diode_color_hsv(&l_c,54 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,53, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 41:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,42 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,43 , from_color);
			lighting_set_diode_color_hsv(&l_c,53 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,52, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 42:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,43 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,44 , from_color);
			lighting_set_diode_color_hsv(&l_c,52 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,51, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 43:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,44 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,45 , from_color);
			lighting_set_diode_color_hsv(&l_c,51 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,50, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 44:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,45 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,46 , from_color);
			lighting_set_diode_color_hsv(&l_c,50 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,49, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 45:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,46 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,47 , from_color);
			lighting_set_diode_color_hsv(&l_c,49 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,48, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 46:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,63 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,62 , from_color);
			lighting_set_diode_color_hsv(&l_c,64 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,65, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 47:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,62 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,61 , from_color);
			lighting_set_diode_color_hsv(&l_c,65 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,66, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 48:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,61 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,60 , from_color);
			lighting_set_diode_color_hsv(&l_c,66 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,67, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 49:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,60 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,59 , from_color);
			lighting_set_diode_color_hsv(&l_c,67 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,68, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 50:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,59 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,58 , from_color);
			lighting_set_diode_color_hsv(&l_c,68 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,69, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 51:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,58 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,57 , from_color);
			lighting_set_diode_color_hsv(&l_c,69 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,70, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 52:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,57 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,56 , from_color);
			lighting_set_diode_color_hsv(&l_c,70 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,71, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 53:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,56 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,55 , from_color);
			lighting_set_diode_color_hsv(&l_c,71 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,72, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 54:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,55 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,54 , from_color);
			lighting_set_diode_color_hsv(&l_c,72 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,73, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 55:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,54 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,53 , from_color);
			lighting_set_diode_color_hsv(&l_c,73 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,74, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 56:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,53 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,52 , from_color);
			lighting_set_diode_color_hsv(&l_c,74 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,75, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 57:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,52 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,51 , from_color);
			lighting_set_diode_color_hsv(&l_c,75 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,76, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 58:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,51 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,50 , from_color);
			lighting_set_diode_color_hsv(&l_c,76 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,77, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 59:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,50 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,49 , from_color);
			lighting_set_diode_color_hsv(&l_c,77 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,78, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 60:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c,49 , from_color);//mal
			lighting_set_diode_color_hsv(&l_c,48 , from_color);
			lighting_set_diode_color_hsv(&l_c,78 , from_color);//ros
			lighting_set_diode_color_hsv(&l_c,79, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}

		case 61:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 64, from_color);
			lighting_set_diode_color_hsv(&l_c,65 , from_color);
			lighting_set_diode_color_hsv(&l_c, 95, from_color);
			lighting_set_diode_color_hsv(&l_c, 94, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 62:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 65, from_color);
			lighting_set_diode_color_hsv(&l_c,66 , from_color);
			lighting_set_diode_color_hsv(&l_c, 94, from_color);
			lighting_set_diode_color_hsv(&l_c, 93, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 63:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 66, from_color);
			lighting_set_diode_color_hsv(&l_c,67, from_color);
			lighting_set_diode_color_hsv(&l_c, 93, from_color);
			lighting_set_diode_color_hsv(&l_c, 92, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 64:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 67, from_color);
			lighting_set_diode_color_hsv(&l_c,68 , from_color);
			lighting_set_diode_color_hsv(&l_c, 92, from_color);
			lighting_set_diode_color_hsv(&l_c, 91, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 65:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 68, from_color);
			lighting_set_diode_color_hsv(&l_c,69 , from_color);
			lighting_set_diode_color_hsv(&l_c, 91, from_color);
			lighting_set_diode_color_hsv(&l_c, 90, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 66:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 69, from_color);
			lighting_set_diode_color_hsv(&l_c,	70 , from_color);
			lighting_set_diode_color_hsv(&l_c, 90, from_color);
			lighting_set_diode_color_hsv(&l_c, 89, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 67:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 70, from_color);
			lighting_set_diode_color_hsv(&l_c,71, from_color);
			lighting_set_diode_color_hsv(&l_c, 89, from_color);
			lighting_set_diode_color_hsv(&l_c, 88, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 68:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 71, from_color);
			lighting_set_diode_color_hsv(&l_c,72 , from_color);
			lighting_set_diode_color_hsv(&l_c, 88, from_color);
			lighting_set_diode_color_hsv(&l_c, 87, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 69:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 72, from_color);
			lighting_set_diode_color_hsv(&l_c,73 , from_color);
			lighting_set_diode_color_hsv(&l_c, 87, from_color);
			lighting_set_diode_color_hsv(&l_c, 86, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 70:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 73, from_color);
			lighting_set_diode_color_hsv(&l_c,74 , from_color);
			lighting_set_diode_color_hsv(&l_c, 86, from_color);
			lighting_set_diode_color_hsv(&l_c, 85, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 71:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 74, from_color);
			lighting_set_diode_color_hsv(&l_c,75 , from_color);
			lighting_set_diode_color_hsv(&l_c, 85, from_color);
			lighting_set_diode_color_hsv(&l_c, 84, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 72:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 75, from_color);
			lighting_set_diode_color_hsv(&l_c,76 , from_color);
			lighting_set_diode_color_hsv(&l_c, 84, from_color);
			lighting_set_diode_color_hsv(&l_c, 83, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 73:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 76, from_color);
			lighting_set_diode_color_hsv(&l_c,77, from_color);
			lighting_set_diode_color_hsv(&l_c, 83, from_color);
			lighting_set_diode_color_hsv(&l_c, 82, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 74:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 77, from_color);
			lighting_set_diode_color_hsv(&l_c,78 , from_color);
			lighting_set_diode_color_hsv(&l_c, 82, from_color);
			lighting_set_diode_color_hsv(&l_c, 81, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 75:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 78, from_color);
			lighting_set_diode_color_hsv(&l_c,79 , from_color);
			lighting_set_diode_color_hsv(&l_c, 81, from_color);
			lighting_set_diode_color_hsv(&l_c, 80, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}//tutaj
		case 76:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 95, from_color);
			lighting_set_diode_color_hsv(&l_c,	94 , from_color);
			lighting_set_diode_color_hsv(&l_c, 96, from_color);
			lighting_set_diode_color_hsv(&l_c, 97, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 77:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 94, from_color);
			lighting_set_diode_color_hsv(&l_c,93, from_color);
			lighting_set_diode_color_hsv(&l_c, 97, from_color);
			lighting_set_diode_color_hsv(&l_c, 98, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 78:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 93, from_color);
			lighting_set_diode_color_hsv(&l_c,92 , from_color);
			lighting_set_diode_color_hsv(&l_c, 98, from_color);
			lighting_set_diode_color_hsv(&l_c, 99, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 79:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 92, from_color);
			lighting_set_diode_color_hsv(&l_c,91 , from_color);
			lighting_set_diode_color_hsv(&l_c, 99, from_color);
			lighting_set_diode_color_hsv(&l_c, 100, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 80:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 91, from_color);
			lighting_set_diode_color_hsv(&l_c,90 , from_color);
			lighting_set_diode_color_hsv(&l_c, 100, from_color);
			lighting_set_diode_color_hsv(&l_c, 101, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 81:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 90, from_color);
			lighting_set_diode_color_hsv(&l_c,89 , from_color);
			lighting_set_diode_color_hsv(&l_c, 101, from_color);
			lighting_set_diode_color_hsv(&l_c, 102, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 82:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 89, from_color);
			lighting_set_diode_color_hsv(&l_c,88 , from_color);
			lighting_set_diode_color_hsv(&l_c, 102, from_color);
			lighting_set_diode_color_hsv(&l_c, 103, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 83:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 88, from_color);
			lighting_set_diode_color_hsv(&l_c,87, from_color);
			lighting_set_diode_color_hsv(&l_c, 103, from_color);
			lighting_set_diode_color_hsv(&l_c, 104, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 84:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 87, from_color);
			lighting_set_diode_color_hsv(&l_c,86 , from_color);
			lighting_set_diode_color_hsv(&l_c, 104, from_color);
			lighting_set_diode_color_hsv(&l_c, 105, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 85:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 86, from_color);
			lighting_set_diode_color_hsv(&l_c,85 , from_color);
			lighting_set_diode_color_hsv(&l_c, 105, from_color);
			lighting_set_diode_color_hsv(&l_c, 106, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 86:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 85, from_color);
			lighting_set_diode_color_hsv(&l_c,	84 , from_color);
			lighting_set_diode_color_hsv(&l_c, 106, from_color);
			lighting_set_diode_color_hsv(&l_c, 107, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 87:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 84, from_color);
			lighting_set_diode_color_hsv(&l_c,83, from_color);
			lighting_set_diode_color_hsv(&l_c, 107, from_color);
			lighting_set_diode_color_hsv(&l_c, 108, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 88:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 83, from_color);
			lighting_set_diode_color_hsv(&l_c,82 , from_color);
			lighting_set_diode_color_hsv(&l_c, 108, from_color);
			lighting_set_diode_color_hsv(&l_c, 109, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 89:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 82, from_color);
			lighting_set_diode_color_hsv(&l_c,81 , from_color);
			lighting_set_diode_color_hsv(&l_c, 109, from_color);
			lighting_set_diode_color_hsv(&l_c, 110, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 90:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 81, from_color);
			lighting_set_diode_color_hsv(&l_c,80 , from_color);
			lighting_set_diode_color_hsv(&l_c, 110, from_color);
			lighting_set_diode_color_hsv(&l_c, 111, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 91:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 96, from_color);
			lighting_set_diode_color_hsv(&l_c,97 , from_color);
			lighting_set_diode_color_hsv(&l_c, 127, from_color);
			lighting_set_diode_color_hsv(&l_c, 126, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 92:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 97, from_color);
			lighting_set_diode_color_hsv(&l_c,98 , from_color);
			lighting_set_diode_color_hsv(&l_c, 126, from_color);
			lighting_set_diode_color_hsv(&l_c, 125, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 93:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 98, from_color);
			lighting_set_diode_color_hsv(&l_c,99, from_color);
			lighting_set_diode_color_hsv(&l_c, 125, from_color);
			lighting_set_diode_color_hsv(&l_c, 124, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 94:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 99, from_color);
			lighting_set_diode_color_hsv(&l_c,100 , from_color);
			lighting_set_diode_color_hsv(&l_c, 124, from_color);
			lighting_set_diode_color_hsv(&l_c, 123, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 95:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 100, from_color);
			lighting_set_diode_color_hsv(&l_c,101 , from_color);
			lighting_set_diode_color_hsv(&l_c, 123, from_color);
			lighting_set_diode_color_hsv(&l_c, 122, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 96:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 101, from_color);
			lighting_set_diode_color_hsv(&l_c,	102 , from_color);
			lighting_set_diode_color_hsv(&l_c, 122, from_color);
			lighting_set_diode_color_hsv(&l_c, 121, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 97:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 102, from_color);
			lighting_set_diode_color_hsv(&l_c,103, from_color);
			lighting_set_diode_color_hsv(&l_c, 121, from_color);
			lighting_set_diode_color_hsv(&l_c, 120, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 98:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 103, from_color);
			lighting_set_diode_color_hsv(&l_c,104 , from_color);
			lighting_set_diode_color_hsv(&l_c, 120, from_color);
			lighting_set_diode_color_hsv(&l_c, 119, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 99:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 104, from_color);
			lighting_set_diode_color_hsv(&l_c,105 , from_color);
			lighting_set_diode_color_hsv(&l_c, 119, from_color);
			lighting_set_diode_color_hsv(&l_c, 118, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 100:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 105, from_color);
			lighting_set_diode_color_hsv(&l_c,106 , from_color);
			lighting_set_diode_color_hsv(&l_c, 118, from_color);
			lighting_set_diode_color_hsv(&l_c, 117, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 101:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 106, from_color);
			lighting_set_diode_color_hsv(&l_c,107 , from_color);
			lighting_set_diode_color_hsv(&l_c, 117, from_color);
			lighting_set_diode_color_hsv(&l_c, 116, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 102:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 107, from_color);
			lighting_set_diode_color_hsv(&l_c,108 , from_color);
			lighting_set_diode_color_hsv(&l_c, 116, from_color);
			lighting_set_diode_color_hsv(&l_c, 115, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 103:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 108, from_color);
			lighting_set_diode_color_hsv(&l_c,109, from_color);
			lighting_set_diode_color_hsv(&l_c, 115, from_color);
			lighting_set_diode_color_hsv(&l_c, 114, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 104:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 109, from_color);
			lighting_set_diode_color_hsv(&l_c,110 , from_color);
			lighting_set_diode_color_hsv(&l_c, 114, from_color);
			lighting_set_diode_color_hsv(&l_c, 113, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 105:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 110, from_color);
			lighting_set_diode_color_hsv(&l_c,111 , from_color);
			lighting_set_diode_color_hsv(&l_c, 113, from_color);
			lighting_set_diode_color_hsv(&l_c, 112, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 106:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 127, from_color);
			lighting_set_diode_color_hsv(&l_c,	126 , from_color);
			lighting_set_diode_color_hsv(&l_c, 128, from_color);
			lighting_set_diode_color_hsv(&l_c, 129, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 107:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 126, from_color);
			lighting_set_diode_color_hsv(&l_c,125, from_color);
			lighting_set_diode_color_hsv(&l_c, 129, from_color);
			lighting_set_diode_color_hsv(&l_c, 130, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 108:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 125, from_color);
			lighting_set_diode_color_hsv(&l_c,124 , from_color);
			lighting_set_diode_color_hsv(&l_c, 130, from_color);
			lighting_set_diode_color_hsv(&l_c, 131, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 109:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 124, from_color);
			lighting_set_diode_color_hsv(&l_c,123 , from_color);
			lighting_set_diode_color_hsv(&l_c, 131, from_color);
			lighting_set_diode_color_hsv(&l_c, 132, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 110:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 123, from_color);
			lighting_set_diode_color_hsv(&l_c,122 , from_color);
			lighting_set_diode_color_hsv(&l_c, 132, from_color);
			lighting_set_diode_color_hsv(&l_c, 133, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 111:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 122, from_color);
			lighting_set_diode_color_hsv(&l_c,121 , from_color);
			lighting_set_diode_color_hsv(&l_c, 133, from_color);
			lighting_set_diode_color_hsv(&l_c, 134, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 112:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 121, from_color);
			lighting_set_diode_color_hsv(&l_c,120 , from_color);
			lighting_set_diode_color_hsv(&l_c, 134, from_color);
			lighting_set_diode_color_hsv(&l_c, 135, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 113:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 120, from_color);
			lighting_set_diode_color_hsv(&l_c,119, from_color);
			lighting_set_diode_color_hsv(&l_c, 135, from_color);
			lighting_set_diode_color_hsv(&l_c, 136, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 114:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 119, from_color);
			lighting_set_diode_color_hsv(&l_c,118 , from_color);
			lighting_set_diode_color_hsv(&l_c, 136, from_color);
			lighting_set_diode_color_hsv(&l_c, 137, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 115:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 118, from_color);
			lighting_set_diode_color_hsv(&l_c,117 , from_color);
			lighting_set_diode_color_hsv(&l_c, 137, from_color);
			lighting_set_diode_color_hsv(&l_c, 138, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 116:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 117, from_color);
			lighting_set_diode_color_hsv(&l_c,	116 , from_color);
			lighting_set_diode_color_hsv(&l_c, 138, from_color);
			lighting_set_diode_color_hsv(&l_c, 139, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 117:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 116, from_color);
			lighting_set_diode_color_hsv(&l_c,115, from_color);
			lighting_set_diode_color_hsv(&l_c, 139, from_color);
			lighting_set_diode_color_hsv(&l_c, 140, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 118:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 115, from_color);
			lighting_set_diode_color_hsv(&l_c,114 , from_color);
			lighting_set_diode_color_hsv(&l_c, 140, from_color);
			lighting_set_diode_color_hsv(&l_c, 141, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 119:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 114, from_color);
			lighting_set_diode_color_hsv(&l_c,113 , from_color);
			lighting_set_diode_color_hsv(&l_c, 141, from_color);
			lighting_set_diode_color_hsv(&l_c, 142, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 120:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 113, from_color);
			lighting_set_diode_color_hsv(&l_c,112 , from_color);
			lighting_set_diode_color_hsv(&l_c, 142, from_color);
			lighting_set_diode_color_hsv(&l_c, 143, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 121:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 128, from_color);
			lighting_set_diode_color_hsv(&l_c,129 , from_color);
			lighting_set_diode_color_hsv(&l_c, 159, from_color);
			lighting_set_diode_color_hsv(&l_c, 158, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 122:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 129, from_color);
			lighting_set_diode_color_hsv(&l_c,130 , from_color);
			lighting_set_diode_color_hsv(&l_c, 158, from_color);
			lighting_set_diode_color_hsv(&l_c, 157, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 123:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 130, from_color);
			lighting_set_diode_color_hsv(&l_c,131, from_color);
			lighting_set_diode_color_hsv(&l_c, 157, from_color);
			lighting_set_diode_color_hsv(&l_c, 156, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 124:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 131, from_color);
			lighting_set_diode_color_hsv(&l_c,132 , from_color);
			lighting_set_diode_color_hsv(&l_c, 156, from_color);
			lighting_set_diode_color_hsv(&l_c, 155, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 125:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 132, from_color);
			lighting_set_diode_color_hsv(&l_c,133 , from_color);
			lighting_set_diode_color_hsv(&l_c, 155, from_color);
			lighting_set_diode_color_hsv(&l_c, 154, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 126:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 133, from_color);
			lighting_set_diode_color_hsv(&l_c,	134 , from_color);
			lighting_set_diode_color_hsv(&l_c, 154, from_color);
			lighting_set_diode_color_hsv(&l_c, 153, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 127:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 134, from_color);
			lighting_set_diode_color_hsv(&l_c,135, from_color);
			lighting_set_diode_color_hsv(&l_c, 153, from_color);
			lighting_set_diode_color_hsv(&l_c, 152, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 128:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 135, from_color);
			lighting_set_diode_color_hsv(&l_c,136 , from_color);
			lighting_set_diode_color_hsv(&l_c, 152, from_color);
			lighting_set_diode_color_hsv(&l_c, 151, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 129:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 136, from_color);
			lighting_set_diode_color_hsv(&l_c,137 , from_color);
			lighting_set_diode_color_hsv(&l_c, 151, from_color);
			lighting_set_diode_color_hsv(&l_c, 150, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 130:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 137, from_color);
			lighting_set_diode_color_hsv(&l_c,138 , from_color);
			lighting_set_diode_color_hsv(&l_c, 150, from_color);
			lighting_set_diode_color_hsv(&l_c, 149, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 131:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 138, from_color);
			lighting_set_diode_color_hsv(&l_c,139 , from_color);
			lighting_set_diode_color_hsv(&l_c, 149, from_color);
			lighting_set_diode_color_hsv(&l_c, 148, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 132:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 139, from_color);
			lighting_set_diode_color_hsv(&l_c,140 , from_color);
			lighting_set_diode_color_hsv(&l_c, 148, from_color);
			lighting_set_diode_color_hsv(&l_c, 147, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 133:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 141, from_color);
			lighting_set_diode_color_hsv(&l_c,140, from_color);
			lighting_set_diode_color_hsv(&l_c, 147, from_color);
			lighting_set_diode_color_hsv(&l_c, 146, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 134:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 142, from_color);
			lighting_set_diode_color_hsv(&l_c,141 , from_color);
			lighting_set_diode_color_hsv(&l_c, 146, from_color);
			lighting_set_diode_color_hsv(&l_c, 145, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 135:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 143, from_color);
			lighting_set_diode_color_hsv(&l_c,142 , from_color);
			lighting_set_diode_color_hsv(&l_c, 145, from_color);
			lighting_set_diode_color_hsv(&l_c, 144, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 136:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 159, from_color);
			lighting_set_diode_color_hsv(&l_c,	158 , from_color);
			lighting_set_diode_color_hsv(&l_c, 160, from_color);
			lighting_set_diode_color_hsv(&l_c, 161, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 137:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 158, from_color);
			lighting_set_diode_color_hsv(&l_c,157, from_color);
			lighting_set_diode_color_hsv(&l_c, 161, from_color);
			lighting_set_diode_color_hsv(&l_c, 162, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 138:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 157, from_color);
			lighting_set_diode_color_hsv(&l_c,156 , from_color);
			lighting_set_diode_color_hsv(&l_c, 162, from_color);
			lighting_set_diode_color_hsv(&l_c, 163, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 139:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 156, from_color);
			lighting_set_diode_color_hsv(&l_c,155 , from_color);
			lighting_set_diode_color_hsv(&l_c, 163, from_color);
			lighting_set_diode_color_hsv(&l_c, 164, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 140:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 155, from_color);
			lighting_set_diode_color_hsv(&l_c,154 , from_color);
			lighting_set_diode_color_hsv(&l_c, 164, from_color);
			lighting_set_diode_color_hsv(&l_c, 165, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 141:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 154, from_color);
			lighting_set_diode_color_hsv(&l_c,153 , from_color);
			lighting_set_diode_color_hsv(&l_c, 165, from_color);
			lighting_set_diode_color_hsv(&l_c, 166, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 142:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 153, from_color);
			lighting_set_diode_color_hsv(&l_c,152 , from_color);
			lighting_set_diode_color_hsv(&l_c, 166, from_color);
			lighting_set_diode_color_hsv(&l_c, 167, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 143:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 152, from_color);
			lighting_set_diode_color_hsv(&l_c,151, from_color);
			lighting_set_diode_color_hsv(&l_c, 167, from_color);
			lighting_set_diode_color_hsv(&l_c, 168, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 144:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 151, from_color);
			lighting_set_diode_color_hsv(&l_c,150 , from_color);
			lighting_set_diode_color_hsv(&l_c, 168, from_color);
			lighting_set_diode_color_hsv(&l_c, 169, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 145:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 150, from_color);
			lighting_set_diode_color_hsv(&l_c,149 , from_color);
			lighting_set_diode_color_hsv(&l_c, 169, from_color);
			lighting_set_diode_color_hsv(&l_c, 170, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 146:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 149, from_color);
			lighting_set_diode_color_hsv(&l_c,	148 , from_color);
			lighting_set_diode_color_hsv(&l_c, 170, from_color);
			lighting_set_diode_color_hsv(&l_c, 171, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 147:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 148, from_color);
			lighting_set_diode_color_hsv(&l_c,147, from_color);
			lighting_set_diode_color_hsv(&l_c, 171, from_color);
			lighting_set_diode_color_hsv(&l_c, 172, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 148:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 147, from_color);
			lighting_set_diode_color_hsv(&l_c,146 , from_color);
			lighting_set_diode_color_hsv(&l_c, 172, from_color);
			lighting_set_diode_color_hsv(&l_c, 173, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 149:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 146, from_color);
			lighting_set_diode_color_hsv(&l_c,145 , from_color);
			lighting_set_diode_color_hsv(&l_c, 173, from_color);
			lighting_set_diode_color_hsv(&l_c, 174, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 150:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 145, from_color);
			lighting_set_diode_color_hsv(&l_c,144 , from_color);
			lighting_set_diode_color_hsv(&l_c, 174, from_color);
			lighting_set_diode_color_hsv(&l_c, 175, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 151:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 160, from_color);
			lighting_set_diode_color_hsv(&l_c,161 , from_color);
			lighting_set_diode_color_hsv(&l_c, 191, from_color);
			lighting_set_diode_color_hsv(&l_c, 190, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 152:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 161, from_color);
			lighting_set_diode_color_hsv(&l_c,162 , from_color);
			lighting_set_diode_color_hsv(&l_c, 190, from_color);
			lighting_set_diode_color_hsv(&l_c, 189, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 153:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 162, from_color);
			lighting_set_diode_color_hsv(&l_c,163, from_color);
			lighting_set_diode_color_hsv(&l_c, 189, from_color);
			lighting_set_diode_color_hsv(&l_c, 188, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 154:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 163, from_color);
			lighting_set_diode_color_hsv(&l_c,163 , from_color);
			lighting_set_diode_color_hsv(&l_c, 188, from_color);
			lighting_set_diode_color_hsv(&l_c, 187, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 155:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 164, from_color);
			lighting_set_diode_color_hsv(&l_c,165 , from_color);
			lighting_set_diode_color_hsv(&l_c, 187, from_color);
			lighting_set_diode_color_hsv(&l_c, 186, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 156:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 165, from_color);
			lighting_set_diode_color_hsv(&l_c,	166 , from_color);
			lighting_set_diode_color_hsv(&l_c, 186, from_color);
			lighting_set_diode_color_hsv(&l_c, 185, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 157:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 166, from_color);
			lighting_set_diode_color_hsv(&l_c,167, from_color);
			lighting_set_diode_color_hsv(&l_c, 185, from_color);
			lighting_set_diode_color_hsv(&l_c, 184, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 158:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 167, from_color);
			lighting_set_diode_color_hsv(&l_c,168 , from_color);
			lighting_set_diode_color_hsv(&l_c, 184, from_color);
			lighting_set_diode_color_hsv(&l_c, 183, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 159:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 168, from_color);
			lighting_set_diode_color_hsv(&l_c,169 , from_color);
			lighting_set_diode_color_hsv(&l_c, 183, from_color);
			lighting_set_diode_color_hsv(&l_c, 182, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 160:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 170, from_color);
			lighting_set_diode_color_hsv(&l_c,169 , from_color);
			lighting_set_diode_color_hsv(&l_c, 182, from_color);
			lighting_set_diode_color_hsv(&l_c, 181, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 161:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 170, from_color);
			lighting_set_diode_color_hsv(&l_c,171 , from_color);
			lighting_set_diode_color_hsv(&l_c, 181, from_color);
			lighting_set_diode_color_hsv(&l_c, 180, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 162:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 171, from_color);
			lighting_set_diode_color_hsv(&l_c,172, from_color);
			lighting_set_diode_color_hsv(&l_c, 180, from_color);
			lighting_set_diode_color_hsv(&l_c, 179, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 163:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 172, from_color);
			lighting_set_diode_color_hsv(&l_c,173, from_color);
			lighting_set_diode_color_hsv(&l_c, 179, from_color);
			lighting_set_diode_color_hsv(&l_c, 178, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 164:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 173, from_color);
			lighting_set_diode_color_hsv(&l_c,174 , from_color);
			lighting_set_diode_color_hsv(&l_c, 178, from_color);
			lighting_set_diode_color_hsv(&l_c, 177, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 165:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 175, from_color);
			lighting_set_diode_color_hsv(&l_c,174 , from_color);
			lighting_set_diode_color_hsv(&l_c, 177, from_color);
			lighting_set_diode_color_hsv(&l_c, 176, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 166:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 191, from_color);
			lighting_set_diode_color_hsv(&l_c,	190 , from_color);
			lighting_set_diode_color_hsv(&l_c, 192, from_color);
			lighting_set_diode_color_hsv(&l_c, 193, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 167:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 190, from_color);
			lighting_set_diode_color_hsv(&l_c,189, from_color);
			lighting_set_diode_color_hsv(&l_c, 193, from_color);
			lighting_set_diode_color_hsv(&l_c, 194, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 168:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 189, from_color);
			lighting_set_diode_color_hsv(&l_c,188 , from_color);
			lighting_set_diode_color_hsv(&l_c, 194, from_color);
			lighting_set_diode_color_hsv(&l_c, 195, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 169:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 188, from_color);
			lighting_set_diode_color_hsv(&l_c,187 , from_color);
			lighting_set_diode_color_hsv(&l_c, 195, from_color);
			lighting_set_diode_color_hsv(&l_c, 196, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 170:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 187, from_color);
			lighting_set_diode_color_hsv(&l_c,186 , from_color);
			lighting_set_diode_color_hsv(&l_c, 196, from_color);
			lighting_set_diode_color_hsv(&l_c, 197, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 171:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 186, from_color);
			lighting_set_diode_color_hsv(&l_c,185 , from_color);
			lighting_set_diode_color_hsv(&l_c, 197, from_color);
			lighting_set_diode_color_hsv(&l_c, 198, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 172:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 185, from_color);
			lighting_set_diode_color_hsv(&l_c,184 , from_color);
			lighting_set_diode_color_hsv(&l_c, 198, from_color);
			lighting_set_diode_color_hsv(&l_c, 199, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 173:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 184, from_color);
			lighting_set_diode_color_hsv(&l_c,183, from_color);
			lighting_set_diode_color_hsv(&l_c, 199, from_color);
			lighting_set_diode_color_hsv(&l_c, 200, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 174:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 183, from_color);
			lighting_set_diode_color_hsv(&l_c,182 , from_color);
			lighting_set_diode_color_hsv(&l_c, 201, from_color);
			lighting_set_diode_color_hsv(&l_c, 200, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 175:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 182, from_color);
			lighting_set_diode_color_hsv(&l_c,181 , from_color);
			lighting_set_diode_color_hsv(&l_c, 202, from_color);
			lighting_set_diode_color_hsv(&l_c, 201, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 176:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 181, from_color);
			lighting_set_diode_color_hsv(&l_c,	180 , from_color);
			lighting_set_diode_color_hsv(&l_c, 203, from_color);
			lighting_set_diode_color_hsv(&l_c, 202, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 177:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 180, from_color);
			lighting_set_diode_color_hsv(&l_c,179, from_color);
			lighting_set_diode_color_hsv(&l_c, 204, from_color);
			lighting_set_diode_color_hsv(&l_c, 203, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 178:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 179, from_color);
			lighting_set_diode_color_hsv(&l_c,178 , from_color);
			lighting_set_diode_color_hsv(&l_c, 205, from_color);
			lighting_set_diode_color_hsv(&l_c, 204, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 179:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 178, from_color);
			lighting_set_diode_color_hsv(&l_c,177 , from_color);
			lighting_set_diode_color_hsv(&l_c, 206, from_color);
			lighting_set_diode_color_hsv(&l_c, 205, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 180:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 176, from_color);
			lighting_set_diode_color_hsv(&l_c,177 , from_color);
			lighting_set_diode_color_hsv(&l_c, 207, from_color);
			lighting_set_diode_color_hsv(&l_c, 206, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}//tutaj
		case 181:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 192, from_color);
			lighting_set_diode_color_hsv(&l_c,193 , from_color);
			lighting_set_diode_color_hsv(&l_c, 223, from_color);
			lighting_set_diode_color_hsv(&l_c, 222, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 182:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 193, from_color);
			lighting_set_diode_color_hsv(&l_c,194 , from_color);
			lighting_set_diode_color_hsv(&l_c, 222, from_color);
			lighting_set_diode_color_hsv(&l_c, 221, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 183:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 194, from_color);
			lighting_set_diode_color_hsv(&l_c,195, from_color);
			lighting_set_diode_color_hsv(&l_c, 221, from_color);
			lighting_set_diode_color_hsv(&l_c, 220, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 184:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 195, from_color);
			lighting_set_diode_color_hsv(&l_c,196 , from_color);
			lighting_set_diode_color_hsv(&l_c, 220, from_color);
			lighting_set_diode_color_hsv(&l_c, 219, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 185:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 196, from_color);
			lighting_set_diode_color_hsv(&l_c,197 , from_color);
			lighting_set_diode_color_hsv(&l_c, 219, from_color);
			lighting_set_diode_color_hsv(&l_c, 218, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 186:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 197, from_color);
			lighting_set_diode_color_hsv(&l_c,	198 , from_color);
			lighting_set_diode_color_hsv(&l_c, 218, from_color);
			lighting_set_diode_color_hsv(&l_c, 217, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 187:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 198, from_color);
			lighting_set_diode_color_hsv(&l_c,199, from_color);
			lighting_set_diode_color_hsv(&l_c, 217, from_color);
			lighting_set_diode_color_hsv(&l_c, 216, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 188:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 199, from_color);
			lighting_set_diode_color_hsv(&l_c,200 , from_color);
			lighting_set_diode_color_hsv(&l_c, 216, from_color);
			lighting_set_diode_color_hsv(&l_c, 215, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 189:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 200, from_color);
			lighting_set_diode_color_hsv(&l_c,201 , from_color);
			lighting_set_diode_color_hsv(&l_c, 215, from_color);
			lighting_set_diode_color_hsv(&l_c, 214, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 190:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 201, from_color);
			lighting_set_diode_color_hsv(&l_c,202 , from_color);
			lighting_set_diode_color_hsv(&l_c, 214, from_color);
			lighting_set_diode_color_hsv(&l_c, 213, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 191:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 202, from_color);
			lighting_set_diode_color_hsv(&l_c,203 , from_color);
			lighting_set_diode_color_hsv(&l_c, 213, from_color);
			lighting_set_diode_color_hsv(&l_c, 212, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 192:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 203, from_color);
			lighting_set_diode_color_hsv(&l_c,204 , from_color);
			lighting_set_diode_color_hsv(&l_c, 212, from_color);
			lighting_set_diode_color_hsv(&l_c, 211, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 193:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 204, from_color);
			lighting_set_diode_color_hsv(&l_c,205, from_color);
			lighting_set_diode_color_hsv(&l_c, 211, from_color);
			lighting_set_diode_color_hsv(&l_c, 210, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 194:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 205, from_color);
			lighting_set_diode_color_hsv(&l_c,206 , from_color);
			lighting_set_diode_color_hsv(&l_c, 210, from_color);
			lighting_set_diode_color_hsv(&l_c, 209, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 195:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 206, from_color);
			lighting_set_diode_color_hsv(&l_c,207 , from_color);
			lighting_set_diode_color_hsv(&l_c, 209, from_color);
			lighting_set_diode_color_hsv(&l_c, 208, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;

		}//yyyyyyyyy
		case 196:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 223, from_color);
			lighting_set_diode_color_hsv(&l_c,	222 , from_color);
			lighting_set_diode_color_hsv(&l_c, 224, from_color);
			lighting_set_diode_color_hsv(&l_c, 225, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 197:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 208, from_color);
			lighting_set_diode_color_hsv(&l_c,209 , from_color);
			lighting_set_diode_color_hsv(&l_c, 238, from_color);
			lighting_set_diode_color_hsv(&l_c, 239, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}


		case 198:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 222, from_color);
			lighting_set_diode_color_hsv(&l_c,221 , from_color);
			lighting_set_diode_color_hsv(&l_c, 225, from_color);
			lighting_set_diode_color_hsv(&l_c, 226, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 199:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 221, from_color);
			lighting_set_diode_color_hsv(&l_c,220 , from_color);
			lighting_set_diode_color_hsv(&l_c, 226, from_color);
			lighting_set_diode_color_hsv(&l_c, 227, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		///////////tutaj ok
		case 200:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 220, from_color);
			lighting_set_diode_color_hsv(&l_c,219 , from_color);
			lighting_set_diode_color_hsv(&l_c, 227, from_color);
			lighting_set_diode_color_hsv(&l_c, 228, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 201:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 219, from_color);
			lighting_set_diode_color_hsv(&l_c,218 , from_color);
			lighting_set_diode_color_hsv(&l_c, 228, from_color);
			lighting_set_diode_color_hsv(&l_c, 229, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 202:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 218, from_color);
			lighting_set_diode_color_hsv(&l_c,217 , from_color);
			lighting_set_diode_color_hsv(&l_c, 229, from_color);
			lighting_set_diode_color_hsv(&l_c, 230, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 203:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 217, from_color);
			lighting_set_diode_color_hsv(&l_c,216, from_color);
			lighting_set_diode_color_hsv(&l_c, 230, from_color);
			lighting_set_diode_color_hsv(&l_c, 231, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 204:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 216, from_color);
			lighting_set_diode_color_hsv(&l_c,215 , from_color);
			lighting_set_diode_color_hsv(&l_c, 231, from_color);
			lighting_set_diode_color_hsv(&l_c, 232, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 205:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 215, from_color);
			lighting_set_diode_color_hsv(&l_c,214 , from_color);
			lighting_set_diode_color_hsv(&l_c, 232, from_color);
			lighting_set_diode_color_hsv(&l_c, 233, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 206:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 214, from_color);
			lighting_set_diode_color_hsv(&l_c,	213 , from_color);
			lighting_set_diode_color_hsv(&l_c, 233, from_color);
			lighting_set_diode_color_hsv(&l_c, 234, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 207:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 213, from_color);
			lighting_set_diode_color_hsv(&l_c,212, from_color);
			lighting_set_diode_color_hsv(&l_c, 234, from_color);
			lighting_set_diode_color_hsv(&l_c, 235, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 208:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 212, from_color);
			lighting_set_diode_color_hsv(&l_c,211 , from_color);
			lighting_set_diode_color_hsv(&l_c, 235, from_color);
			lighting_set_diode_color_hsv(&l_c, 236, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 209:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 211, from_color);
			lighting_set_diode_color_hsv(&l_c,210 , from_color);
			lighting_set_diode_color_hsv(&l_c, 236, from_color);
			lighting_set_diode_color_hsv(&l_c, 237, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 210:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 210, from_color);
			lighting_set_diode_color_hsv(&l_c,209 , from_color);
			lighting_set_diode_color_hsv(&l_c, 237, from_color);
			lighting_set_diode_color_hsv(&l_c, 238, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}



		case 211:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 224, from_color);
			lighting_set_diode_color_hsv(&l_c,225 , from_color);
			lighting_set_diode_color_hsv(&l_c, 255, from_color);
			lighting_set_diode_color_hsv(&l_c, 254, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 212:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 226, from_color);
			lighting_set_diode_color_hsv(&l_c,225 , from_color);
			lighting_set_diode_color_hsv(&l_c, 253, from_color);
			lighting_set_diode_color_hsv(&l_c, 254, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 213:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 226, from_color);
			lighting_set_diode_color_hsv(&l_c,227 , from_color);
			lighting_set_diode_color_hsv(&l_c, 253, from_color);
			lighting_set_diode_color_hsv(&l_c, 252, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 214:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 228, from_color);
			lighting_set_diode_color_hsv(&l_c,227 , from_color);
			lighting_set_diode_color_hsv(&l_c, 251, from_color);
			lighting_set_diode_color_hsv(&l_c, 252, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 215:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 228, from_color);
			lighting_set_diode_color_hsv(&l_c,229 , from_color);
			lighting_set_diode_color_hsv(&l_c, 251, from_color);
			lighting_set_diode_color_hsv(&l_c, 250, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}

		case 216:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 230, from_color);
			lighting_set_diode_color_hsv(&l_c,229 , from_color);
			lighting_set_diode_color_hsv(&l_c, 249, from_color);
			lighting_set_diode_color_hsv(&l_c, 250, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 217:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 230, from_color);
			lighting_set_diode_color_hsv(&l_c,231 , from_color);
			lighting_set_diode_color_hsv(&l_c, 249, from_color);
			lighting_set_diode_color_hsv(&l_c, 248, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 218:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 232, from_color);
			lighting_set_diode_color_hsv(&l_c,231 , from_color);
			lighting_set_diode_color_hsv(&l_c, 247, from_color);
			lighting_set_diode_color_hsv(&l_c, 248, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 219:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 232, from_color);
			lighting_set_diode_color_hsv(&l_c,233 , from_color);
			lighting_set_diode_color_hsv(&l_c, 247, from_color);
			lighting_set_diode_color_hsv(&l_c, 246, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}

		case 220:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 234, from_color);
			lighting_set_diode_color_hsv(&l_c,233 , from_color);
			lighting_set_diode_color_hsv(&l_c, 245, from_color);
			lighting_set_diode_color_hsv(&l_c, 246, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 221:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 234, from_color);
			lighting_set_diode_color_hsv(&l_c,235 , from_color);
			lighting_set_diode_color_hsv(&l_c, 245, from_color);
			lighting_set_diode_color_hsv(&l_c, 244, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 222:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 236, from_color);
			lighting_set_diode_color_hsv(&l_c,235 , from_color);
			lighting_set_diode_color_hsv(&l_c, 243, from_color);
			lighting_set_diode_color_hsv(&l_c, 244, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 223:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 236, from_color);
			lighting_set_diode_color_hsv(&l_c,237 , from_color);
			lighting_set_diode_color_hsv(&l_c, 243, from_color);
			lighting_set_diode_color_hsv(&l_c, 242, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 224:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 238, from_color);
			lighting_set_diode_color_hsv(&l_c,237 , from_color);
			lighting_set_diode_color_hsv(&l_c, 241, from_color);
			lighting_set_diode_color_hsv(&l_c, 242, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}
		case 225:
		{
			zgas();
			from_color.color = rand() % 360;
			lighting_set_diode_color_hsv(&l_c, 238, from_color);
			lighting_set_diode_color_hsv(&l_c,239 , from_color);
			lighting_set_diode_color_hsv(&l_c, 240, from_color);
			lighting_set_diode_color_hsv(&l_c, 241, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(100);
			break;
		}






		}



	}


}






void srodek(void) {


	HAL_Init();
	SystemClock_Config();
	MX_GPIO_Init();
	MX_SPI1_Init();

	ws2812b_config led_strip_c = ws2812b_init(&hspi1, 256);
	lighting_config l_c = lighting_init(256);

	lighting_hsv from_color, to_color;

	from_color.color = 200;
	from_color.power = 0.3;
	to_color.color = 0;
	to_color.power = 0.3;

	from_color.saturation = 2 ;
	to_color.saturation = 1 ;


	while (1) {

		lighting_set_diode_color_hsv(&l_c, 120, from_color);
		lighting_set_diode_color_hsv(&l_c, 119, from_color);
		lighting_set_diode_color_hsv(&l_c, 135, from_color);
		lighting_set_diode_color_hsv(&l_c, 136, from_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(100);






	}


}



void tyncza(void) {


	HAL_Init();
	SystemClock_Config();
	MX_GPIO_Init();
	MX_SPI1_Init();

	ws2812b_config led_strip_c = ws2812b_init(&hspi1, 256);
	lighting_config l_c = lighting_init(256);

	lighting_hsv from_color, to_color;

	from_color.color = 200;
	from_color.power = 0.3;
	to_color.color = 0;
	to_color.power = 0.3;

	from_color.saturation = 2 ;
	to_color.saturation = 1 ;


	while (1) {

		from_color.color = 0;
		to_color.color = 0;
		lighting_draw_gradient_hsv(&l_c, 0, 31, from_color, to_color);

		from_color.color = 40;
		to_color.color = 40;
		lighting_draw_gradient_hsv(&l_c, 32, 63, from_color, to_color);

		//from_color.color = 62;
		//to_color.color = 62;

		//lighting_draw_gradient_hsv(&l_c, 64, 95, from_color, to_color);

		from_color.power = 0.4;
		to_color.power = 0.4;

		from_color.color = 62;
		to_color.color = 62;


		lighting_draw_gradient_hsv(&l_c, 64, 111, from_color, to_color);



		from_color.power = 0.3;
		to_color.power = 0.3;

		from_color.color = 120;
		to_color.color = 120;
		lighting_draw_gradient_hsv(&l_c, 112, 159, from_color, to_color);

		from_color.color = 240;
		to_color.color = 240;
		lighting_draw_gradient_hsv(&l_c, 160, 191, from_color, to_color);

		from_color.color = 280;
		to_color.color = 320;
		lighting_draw_gradient_hsv(&l_c, 192, 255, from_color, to_color);

		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(100);





		double tmp;
		tmp = from_color.color;
		from_color.color = to_color.color;
		to_color.color = tmp;

	}


}




void kwadraty(void) {

	HAL_Init();
	SystemClock_Config();
	MX_GPIO_Init();
	MX_SPI1_Init();
	ws2812b_config led_strip_c = ws2812b_init(&hspi1, 256);
	lighting_config l_c = lighting_init(256);
	lighting_hsv from_color, to_color;

	from_color.color = 0;
	from_color.power = 0.2;
	to_color.color = 0;
	to_color.power = 0.2;

	from_color.saturation = 1 ;
	to_color.saturation = 1 ;


	while (1) {

		from_color.color = 0;


		for( int i = 0; i < 8; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}
		from_color.color = 120;

		for( int i = 136; i < 144; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}




		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;

		from_color.color = 120;

		for( int i = 0; i < 8; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}

		from_color.color = 0;

		for( int i = 136; i < 144; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}

		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);


		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;



		from_color.color =60 ;


		for( int i = 0; i < 8; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}


		from_color.color = 240;
		for( int i = 136; i < 144; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}




		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;

		from_color.color = 240;
		for( int i = 0; i < 8; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}
		from_color.color = 60;
		for( int i = 136; i < 144; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}

		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;

	}


}

int x = 0;

int wonsz()
{
	HAL_Init();
	SystemClock_Config();
	MX_GPIO_Init();
	MX_SPI1_Init();
	ws2812b_config led_strip_c = ws2812b_init(&hspi1, 256);
	lighting_config l_c = lighting_init(256);
	lighting_hsv from_color, to_color;



	while(1)
	{

		from_color.color = x;
		from_color.power = 0.2;
		to_color.color = 0;
		to_color.power = 0.2;

		from_color.saturation = 1 ;
		to_color.saturation = 1 ;

		for(int i=0;i<5;i++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(1);

		}



		for(int i=5;i<256;i++)
		{

			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(1);

			from_color.power = 0;
			to_color.power = 0;
			lighting_set_diode_color_hsv(&l_c, i-5, from_color);
			//lighting_draw_gradient_hsv(&l_c, i, i+4, from_color, to_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			from_color.power = 0.3;

		}
		for(int i=251;i< 256;i++)
		{
			from_color.power = 0;
			to_color.power = 0;
			lighting_set_diode_color_hsv(&l_c, i, from_color);

			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(1);
		}
		x+=30;
		from_color.color = x;
		from_color.power = 0.3;

		for(int i=255;i > 250; i--)
		{

			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(1);

		}


		for(int i = 250; i > 0 ; i--)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(1);

			from_color.power = 0;
			to_color.power = 0;
			lighting_set_diode_color_hsv(&l_c, i+5, from_color);
			//lighting_draw_gradient_hsv(&l_c, i, i+4, from_color, to_color);
			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			from_color.power = 0.3;

		}

		for(int i=5; i >  0;i--)
		{
			from_color.power = 0;
			to_color.power = 0;
			lighting_set_diode_color_hsv(&l_c, i, from_color);

			lighting_update_ws2812b(&l_c, &led_strip_c);
			ws2812b_refresh(&led_strip_c);
			HAL_Delay(1);

		}


		x+=30;
		from_color.color = x;
		if(x>360) x = 0;



	}


}




void kwadraciki_4(void) {

	HAL_Init();
	SystemClock_Config();
	MX_GPIO_Init();
	MX_SPI1_Init();
	ws2812b_config led_strip_c = ws2812b_init(&hspi1, 256);
	lighting_config l_c = lighting_init(256);
	lighting_hsv from_color, to_color;

	from_color.color = 0;
	from_color.power = 0.2;
	to_color.color = 0;
	to_color.power = 0.2;

	from_color.saturation = 1 ;
	to_color.saturation = 1 ;


	while (1)
	{

		from_color.color = 0;


		for( int i = 0; i < 8; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}
		from_color.color = 120;

		for( int i = 136; i < 144; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}




		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;

		from_color.color = 120;

		for( int i = 0; i < 8; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}

		from_color.color = 0;

		for( int i = 136; i < 144; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}

		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);


		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;



		from_color.color =60 ;


		for( int i = 0; i < 8; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}


		from_color.color = 240;
		for( int i = 136; i < 144; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}




		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;

		from_color.color = 240;
		for( int i = 0; i < 8; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}
		from_color.color = 60;

		for( int i = 136; i < 144; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}

		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;

		from_color.color = 180;

		for(int i=8;i<16;i++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}
		from_color.color = 300;

		for( int i = 128; i < 136; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}

		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;

		from_color.color = 300;

		for(int i=8;i<16;i++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}
		from_color.color = 180;

		for( int i = 128; i < 136; i ++)
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}

		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);
		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;

	}

}


void ksztalt_xxx(void)
{

	HAL_Init();
	SystemClock_Config();
	MX_GPIO_Init();
	MX_SPI1_Init();
	ws2812b_config led_strip_c = ws2812b_init(&hspi1, 256);
	lighting_config l_c = lighting_init(256);
	lighting_hsv from_color, to_color;
	from_color.color = 35;
	from_color.power = 0.2;
	to_color.color = 0;
	to_color.power = 0.2;
	from_color.saturation = 1;
	to_color.saturation = 1 ;



	lighting_set_diode_color_hsv(&l_c,7 , from_color);
	lighting_set_diode_color_hsv(&l_c,8, from_color);
	lighting_set_diode_color_hsv(&l_c,24 , from_color);
	lighting_set_diode_color_hsv(&l_c, 23, from_color);
	lighting_set_diode_color_hsv(&l_c, 38, from_color);
	lighting_set_diode_color_hsv(&l_c, 41, from_color);
	lighting_set_diode_color_hsv(&l_c, 57, from_color);
	lighting_set_diode_color_hsv(&l_c, 54, from_color);
	lighting_set_diode_color_hsv(&l_c, 69, from_color);
	lighting_set_diode_color_hsv(&l_c, 74, from_color);
	lighting_set_diode_color_hsv(&l_c, 90, from_color);
	lighting_set_diode_color_hsv(&l_c, 85, from_color);
	lighting_set_diode_color_hsv(&l_c, 101, from_color);
	lighting_set_diode_color_hsv(&l_c, 106, from_color);
	lighting_set_diode_color_hsv(&l_c, 122, from_color);
	lighting_set_diode_color_hsv(&l_c, 117, from_color);
	lighting_set_diode_color_hsv(&l_c, 133, from_color);
	lighting_set_diode_color_hsv(&l_c, 138, from_color);
	lighting_set_diode_color_hsv(&l_c,154 , from_color);
	lighting_set_diode_color_hsv(&l_c, 149, from_color);
	lighting_set_diode_color_hsv(&l_c, 165, from_color);
	lighting_set_diode_color_hsv(&l_c, 170, from_color);
	lighting_set_diode_color_hsv(&l_c, 190, from_color);
	lighting_set_diode_color_hsv(&l_c, 189, from_color);
	lighting_set_diode_color_hsv(&l_c,188 , from_color);
	lighting_set_diode_color_hsv(&l_c,186 , from_color);
	lighting_set_diode_color_hsv(&l_c,181 , from_color);
	lighting_set_diode_color_hsv(&l_c,178 , from_color);
	lighting_set_diode_color_hsv(&l_c,179 , from_color);
	lighting_set_diode_color_hsv(&l_c, 177, from_color);
	lighting_set_diode_color_hsv(&l_c, 192, from_color);
	lighting_set_diode_color_hsv(&l_c,193 , from_color);
	lighting_set_diode_color_hsv(&l_c,195 , from_color);
	lighting_set_diode_color_hsv(&l_c,196 , from_color);
	lighting_set_diode_color_hsv(&l_c,197 , from_color);
	lighting_set_diode_color_hsv(&l_c, 202, from_color);
	lighting_set_diode_color_hsv(&l_c, 203, from_color);
	lighting_set_diode_color_hsv(&l_c,204 , from_color);
	lighting_set_diode_color_hsv(&l_c, 206, from_color);
	lighting_set_diode_color_hsv(&l_c, 207, from_color);
	lighting_set_diode_color_hsv(&l_c, 223, from_color);
	lighting_set_diode_color_hsv(&l_c, 219, from_color);
	lighting_set_diode_color_hsv(&l_c, 218, from_color);
	lighting_set_diode_color_hsv(&l_c, 213, from_color);
	lighting_set_diode_color_hsv(&l_c,212 , from_color);
	lighting_set_diode_color_hsv(&l_c, 208, from_color);
	lighting_set_diode_color_hsv(&l_c, 224, from_color);
	lighting_set_diode_color_hsv(&l_c, 228, from_color);
	lighting_set_diode_color_hsv(&l_c, 229, from_color);
	lighting_set_diode_color_hsv(&l_c, 234, from_color);
	lighting_set_diode_color_hsv(&l_c, 235, from_color);
	lighting_set_diode_color_hsv(&l_c, 239, from_color);
	lighting_set_diode_color_hsv(&l_c, 255, from_color);
	lighting_set_diode_color_hsv(&l_c, 251, from_color);
	lighting_set_diode_color_hsv(&l_c, 250, from_color);
	lighting_set_diode_color_hsv(&l_c, 245, from_color);
	lighting_set_diode_color_hsv(&l_c, 244, from_color);
	lighting_set_diode_color_hsv(&l_c, 240, from_color);



	lighting_update_ws2812b(&l_c, &led_strip_c);
	ws2812b_refresh(&led_strip_c);
	HAL_Delay(1000);


}



void zegar(void)
{

	HAL_Init();
	SystemClock_Config();
	MX_GPIO_Init();
	MX_SPI1_Init();
	ws2812b_config led_strip_c = ws2812b_init(&hspi1, 256);
	lighting_config l_c = lighting_init(256);
	lighting_hsv from_color, to_color;

	from_color.color = 0;
	from_color.power = 0.2;
	to_color.color = 0;
	to_color.power = 0.2;

	from_color.saturation = 1 ;
	to_color.saturation = 1 ;

	int kolor = 0;
	while (1)
	{

		from_color.color = kolor;


		for( int i = 0; i < 8; i ++) //1 kwqarta
				{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

				}

		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);
		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;
		from_color.color = 120;

		kolor+=30;
		from_color.color = kolor;

		for(int i=8;i<16;i++) //2 kwarta
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, (31 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 32)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (63 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (95 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (127 - i )  , from_color);

		}

		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);
		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;
		from_color.color = 120;

		kolor+=30;
		from_color.color = kolor;


		for( int i = 136; i < 144; i ++) //3 kwarta
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}


		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);
		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;
		from_color.color = 120;

		kolor+=30;
		from_color.color = kolor;



		for( int i = 128; i < 136; i ++) //4 kwarta
		{
			lighting_set_diode_color_hsv(&l_c, i, from_color);
			lighting_set_diode_color_hsv(&l_c, 287 - i, from_color);
			lighting_set_diode_color_hsv(&l_c, 32 + i, from_color);
			lighting_set_diode_color_hsv(&l_c, (319 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i + 64)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (351 - i )  , from_color);
			lighting_set_diode_color_hsv(&l_c, (i+ 96)  , from_color);
			lighting_set_diode_color_hsv(&l_c, (383 - i )  , from_color);

		}

		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);
		from_color.power = 0;
		to_color.power = 0;

		lighting_draw_gradient_hsv(&l_c, 0, 256, from_color, to_color);
		lighting_update_ws2812b(&l_c, &led_strip_c);
		ws2812b_refresh(&led_strip_c);
		HAL_Delay(1000);

		from_color.power = 0.3;
		to_color.power = 0.3;
		from_color.color = 120;

		kolor+=30;
		from_color.color = kolor;

		if(kolor>360) kolor = 0;

	}


}






