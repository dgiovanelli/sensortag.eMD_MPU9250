/*
 * i2c_rutinas.h
 *
 *  Created on: 21/04/2016
 *      Author: EinSoldiatGott
 */

#ifndef I2C_MPU_REMAP_H_
#define I2C_MPU_REMAP_H_

#include "stdbool.h"
#include "stdint.h"
#include "SensorI2C.h"

///* -----------------------------------------------------------------------------


/* -----------------------------------------------------------------------------
*                           Funciones
* ------------------------------------------------------------------------------
*/

bool i2c_write(uint8_t slave_addr, uint8_t reg_addr, uint8_t length, uint8_t *data);
bool i2c_read(uint8_t slave_addr, uint8_t reg_addr,uint8_t length, uint8_t *data);


#endif /* I2C_MPU_REMAP_H_ */
