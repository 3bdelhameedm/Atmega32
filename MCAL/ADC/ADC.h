/*
 * ADC.H
 *
 *  Created on: Jul 24, 2023
 *      Author: abdel
 */

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_Types.h"
#include "ADC_REG.h"
#include "ADC_TYPES.h"
#include "ADC_Confi.h"



#ifndef REPO_MCAL_ADC_ADC_H_
#define REPO_MCAL_ADC_ADC_H_

typedef enum {
	ADC_channel_0,
	ADC_channel_1,
	ADC_channel_2,
	ADC_channel_3,
	ADC_channel_4,
	ADC_channel_5,
	ADC_channel_6,
	ADC_channel_7
}Adc_channel_types;

 void ADC_Initializ(void);
 void ADC_start_conversion(Adc_channel_types ADC_channel); //select channel from 8 channel
 uint16 ADC_RetResult(void);

#endif /* REPO_MCAL_ADC_ADC_H_ */
