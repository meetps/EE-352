/*
 *  A "Do nothing file"
 */
#include "stdio.h"
#include "usbstk5515.h"
#include "usbstk5515_gpio.h"
#include "usbstk5515_i2c.h"

/* ------------------------------------------------------------------------ *
 *                                                                          *
 *  main( )                                                                 *
 *                                                                          *
 * ------------------------------------------------------------------------ */
main( void )
{   
	USBSTK5515_init( );
	int i;
    while(1)
    {    
    	for(i=0;i<100;i++)
    	{	
    		//-----------------
    		//----Do nothing---
    		//-----------------
    	{
    }
}
