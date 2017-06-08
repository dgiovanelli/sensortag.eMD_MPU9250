/*
 * i2c_rutinas.c
 *
 *  Created on: 1/04/2016
 *      Author: EinSoldiatGott
 * 		José Iván Esquivel Mendoza
 * 		Universidad Autónoma Metropolitana
 * 		Jesquivel@xanum.uam.mx

 *      Based on bspi2c from sensortag Project
 *      Removed low power and semaphores
 */

/* -----------------------------------------------------------------------------
*                           Mis includes
* ------------------------------------------------------------------------------
*/
#include <i2c_mpu_remap.h>
#include "Board.h"
/* -----------------------------------------------------------------------------
*                           Cosas de I2C
* ------------------------------------------------------------------------------
*/


/*******************************************************************************
 * @fn          i2c_write
 * @brief       Escribe por i2c, adaptada para driver
 * @param       pbuf  - Puntero al Buffer
 * @param       nBits - Número de bits
 * @return      !ok
 */
bool i2c_write(uint8_t slave_addr, uint8_t reg_addr, uint8_t length, uint8_t *data)
{

	if((slave_addr != Board_MPU9250_ADDR) && (slave_addr != Board_MPU9250_MAG_ADDR)) {
		return FALSE;
	}
	bool ret = FALSE;
	if(SensorI2C_select(SENSOR_I2C_1,slave_addr)){
		ret = SensorI2C_writeReg(reg_addr, data, length);
	}
	SensorI2C_deselect();
	return !ret;

}


/*******************************************************************************
 * @fn          i2c_read
 * @brief       Lee por i2c, adaptada para driver
 * @param       pbuf  - Puntero al Buffer
 * @param       nBits - Número de bits
 * @return      !ok
 */
bool i2c_read(uint8_t slave_addr, uint8_t reg_addr,uint8_t length, uint8_t *data){

//	if(slave_addr != Board_MPU9250_ADDR || slave_addr != Board_MPU9250_MAG_ADDR) {
//		return FALSE;
//	}
	bool ret = FALSE;
	if(SensorI2C_select(SENSOR_I2C_1,slave_addr)){
		ret = SensorI2C_readReg(reg_addr, data, length);
	}
	SensorI2C_deselect();
	return !ret;

}
