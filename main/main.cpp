
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"


#include "my_print1.h"
#include "my_print2.h"
//#include "WiFi.h"

//////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////

extern "C" void app_main(void)
{


	while(1)
	{

	    for (int i = 10; i >= 0; i--) 
		{
    	           		
			myPrintf1( i );
       		
       		myPrintf2( i );
       		
        
        	vTaskDelay(1000 / portTICK_PERIOD_MS);
    	}
    	
    	
		printf("Limpando a tela\n");
		vTaskDelay(1000 / portTICK_PERIOD_MS);
		vTaskDelay(1000 / portTICK_PERIOD_MS);
		vTaskDelay(1000 / portTICK_PERIOD_MS);		
		printf("\e[1;1H\e[2J");  // clear terminal screen.    	
    }



}



