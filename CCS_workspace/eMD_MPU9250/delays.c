/*
 * delays.c
 *
 *  Created on: 06/04/2016
 *      Author: EinSoldiatGott
 * 		Jos� Iv�n Esquivel Mendoza
 * 		Universidad Aut�noma Metropolitana
 * 		Jesquivel@xanum.uam.mx
 */

#include "delays.h"

//Tiempo
Types_FreqHz freq;


void get_ms(unsigned long * timestamp){
	Timestamp_getFreq(&freq);
	timestamp[0] = (unsigned long) ((Timestamp_get32()*1000)/ freq.lo); //Unsigned long = u32
}
