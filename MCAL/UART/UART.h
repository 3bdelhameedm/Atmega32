/*
 * UART.h
 *
 *  Created on: Aug 3, 2023
 *      Author: abdel
 */

#ifndef MCAL_UART_UART_H_
#define MCAL_UART_UART_H_

void UART_sendchar(char data);

unsigned char UART_GETChar(void);

void UART_sendstring(char *ptr);

void UART_Transmit(unsigned char data);

unsigned char UART_Recieve(void);



#endif /* MCAL_UART_UART_H_ */
