/*
 * ADC.C

 *
 *  Created on: Jul 24, 2023
 *      Author: abdel
 */

#include "ADC.h"

void ADC_Initializ(void)
{
	/*-------------- Select voltage reference -----------------*/

	ADMUX_Reg &= ADC_VOLTAGE_REF_CLR_MASK;
	ADMUX_Reg |=ADC_VOLTAGE_REF_SELECTOR_msk;

	/*---------------   Select ADC Mode -----------------------*/
#if ADC_MODE_SELECTOR== ADC_MODE_AUTO_TRIGGER
	SET_BIT(ADCSRA_Reg,5);
	SFIOR_Reg &=ADC_AUTO_TRIG_SRC_clr_msk;
	SFIOR_Reg |=ADC_AUTO_TRIG_SRCE_SELECTOR;

#elif ADC_MODE_SELECTOR==ADC_MODE_SPINELE_CONVERSION
	CLR_BIT(ADCSRA_Reg,5);
#endif
	/*---------------Selecting Adjustment ---------------------*/
#if  ADC_ADJUSTMENT_SELECTOR== ADC_RIGHT_ADJUSTED
		CLR_BIT(ADMUX_Reg,5);
#elif ADC_ADJUSTMENT_SELECTOR== ADC_LEFT_ADJUSTED
	SET_BIT(ADMUX_Reg,5);
#endif
	/*--------------- Clearing  Interrupt flag ----------------*/
		SET_BIT(ADCSRA_Reg,4);
	/*----------------- Enabling ADC --------------------------*/
		SET_BIT(ADCSRA_Reg,7);
}
 void ADC_start_conversion(Adc_channel_types ADC_channel)
 {
		/*--------------- Select ADC channel ----------------*/

	 ADMUX_Reg &=ADC_CHANNEL_SELECTOR_CLR_msk;
	 ADMUX_Reg |=ADC_channel;
		/*--------------- ADC start conversion ----------------*/
     SET_BIT(ADCSRA_Reg,6);
 }

 uint16 ADC_RetResult(void){

	while (GET_BIT(ADCSRA_Reg,6));
    return ADCHL_Reg ;

 }
