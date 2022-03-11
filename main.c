/*
 * File:   main.c
 * Author: 21193460
 *
 * Created on 21 de Fevereiro de 2022, 09:51
 */


#include "config.h"
#include <xc.h>
#include "delay.h"
#include "lcd.h"

void main( void )
{
    unsigned int cont;
    lcd_init();
    lcd_print(0,0,"Contagem:       ");
    while( 1 )
    {
        lcd_num(0,10, cont, 3 );
        delay(1000);
        ++cont;
    }
}
