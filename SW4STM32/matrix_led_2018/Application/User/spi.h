#ifndef __spi_H
#define __spi_H
#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f4xx_hal.h"


extern SPI_HandleTypeDef hspi1;


void MX_SPI1_Init(void);


#ifdef __cplusplus
}
#endif
#endif /*__ spi_H */

