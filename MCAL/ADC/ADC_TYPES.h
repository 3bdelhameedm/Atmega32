/*
 * ADC_TYPES.h
 *
 *  Created on: Jul 24, 2023
 *      Author: abdel
 */

#ifndef REPO_MCAL_ADC_ADC_TYPES_H_
#define REPO_MCAL_ADC_ADC_TYPES_H_
/* ------------------adc voltage select---------------------*/

#define ADC_VOLTAGE_REF_CLR_MASK    0b00111111
#define ADC_VOLTAGE_REF_AVCC        0b01000000
#define ADC_VOLTAGE_REF_AREF        0b00000000
#define ADC_VOLTAGE_REF_2_56V       0b11000000

/* ------------------adc mode select------------------------*/

#define ADC_MODE_AUTO_TRIGGER         1
#define ADC_MODE_SINGLE_CONVERSION    0

/*-------------------adc ADJUST select----------------------*/

#define ADC_RIGHT_ADJUSTED            0
#define ADC_LEFT_ADJUSTED             1

/*----------------adc priscaller select---------------------*/

#define ADC_PRESCALER_clr_msk       0b11111000
#define ADC_PRESCALE_2_msk          0b00000000
#define ADC_PRESCALER_4_msk         0b00000010
#define ADC_PRESCALER 8 msk         0b00000011
#define ADC_PRESCALER_16_msk        0b00000100
#define ADC_PRESCALER_32_msk        0b00000101
#define ADC_PRESCALER_64 msk        0b00000110
#define ADC_PRESCALER_128_msk       0b00000111

/*----------------ADC Auto Trigger Select---------------- */

#define ADC_AUTO_TRIG_SRC_clr_msk             0b00011111
#define ADC_AUTO_TRIG_SRC_FREE_RUNNING_msk    0b00000000
#define ADC_AUTO TRIG SRC ANALOG_COMP_msk     0b00100000
#define ADC_AUTO_TRIG_SRC_EXTIO_msk           0b01000000
#define ADC_AUTO_TRIG_SRC_TIMERO_COMP_msk     0b01100000
#define ADC_AUTO_TRIG_SRC_TIMERO_OVF_msk      0b10000000
#define ADC_AUTO_TRIG_SRC_TIMER1_COMP_msk     0b10100000
#define ADC_AUTO_TRIG_SRC_TIMER1_OVF_msk      0b11000000
#define ADC_AUTO_TRIG_SRC_TIMER1_CAPT_msk     0b11100000
/*----------------ADC mask to clear channel ---------------- */
#define ADC_CHANNEL_SELECTOR_CLR_msk    0b11100000

#endif /* REPO_MCAL_ADC_ADC_TYPES_H_ */
