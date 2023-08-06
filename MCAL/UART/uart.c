/*
 * dss.c
 *
 *  Created on: Aug 6, 2023
 *      Author: abdel
 */


///*
// * UART.C
// *
// *  Created on: Jul 25, 2023
// *      Author: abdel
// */
//
//


#include <avr/io.h>

void UART_sendchar(char data){
	while(!(UCSRA & (1<<UDRE)));
	UDR=data;



}
unsigned char UART_GETChar(void){
	unsigned char Result;
	while((UCSRA&0x80)==0x00);
	Result=UDR;


}
void UART_sendstring(char *ptr){
	int counter=0;
	while(1){
		if(ptr[counter]=='\0'){
			break;
		}
		UART_sendchar(ptr[counter]);
		counter++;

	}}
void UART_Transmit(unsigned char data)
{
while(!(UCSRA&(1<<UDRE)));
 UDR=data;

}
unsigned char UART_Recieve(void){
	while(!(UCSRA&(1<<RXC)));
	return UDR;

}
