# 2018_LedMatrix
LedMatrix is a student's project. The main purpose was to be able to control every single addressable diode on 16x16 matrix. 


## Requirements

 - STM32F4 Discovery Microcontroller
 - 16x16 addressable diode matrix
 - Basic computer feeder
 - 1kF  capacitor
 - System Workbench for STM32

## Code 

 - `void lighting_set_diode_color_rgb ( lighting_config * config, int nr_diody, lighting_rgb rgb)`
	Sets RGB color for a diode.
	lighting_config is a structure with fields: [number of diodes], [lighting_rgb]
	lighting_rgb is a structure with fields: [blue], [green], [red]


 - `void lighting_set_diode_color_hsv( lighting_config *config, int nr_diody, lightinh_hsv hsv)`
	Converts color from HSV to RGB. 
	lighting_hsv is a structure with fields: [color], [saturation], [value]
	
 - `void lighting_draw_gradient_rgb (lighting_config * config, int from_diode, int to_diode, lighting_rgb from_color, lighting_rgb to_color)`
	Sets gradient (filling of matrix) with specific color. Thanks to this transition between colors is soft and have shape (in this case it's in the middle).  
 - `void lighting_draw_gradient_hsv(lighting_config * config, int from_diode,
int to_diode, lighting_hsv from_color, lighting_hsv to_color)`
	Converts HSV to RGS to get a gradient.
 - `double lighting_gamma_correction(double in)`
	Gamma correction is necessary to distinguish colors.
 - `void lighting_update_ws2812b(lighting_config * lighting_c, ws2812b_config * ws2812b_c)`
	Saves diode color in binary represenatation. Now, it can be send to matrix. 
 - `lighting_rgb lighting_hsv2rgb(lighting_hsv in)`
	Converts HSV to RGB.
 - `ws2812b_config ws2812b_init(SPI_HandleTypeDef * spi_handler, uint16_t diodes_count)`
	Initializes fields in structure ws2812b_init.
 - `void ws2812b_set_diode_color(ws2812b_config * config, uint16_t diode_id, ws2812b_color color)`
	Sets color in specific diode so it can be instantly send.
 - `void ws2812b_refresh(ws2812b_config * config)`
	Sets bits and creates packet which is later send to matrix.


## Authors

 - [Eryk Soko³owski](https://github.com/qeryq)
 - [Aleksandra Marzec](https://github.com/AleksMarzec)

## License

[MIT](https://choosealicense.com/licenses/mit/)
```
