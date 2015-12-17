/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include "config/stm32plus.h"
#include "config/gpio.h"
#include "config/timing.h"

#include "board/f4discovery.h"

using namespace stm32plus;

/* Defines -------------------------------------------------------------------*/

/* Variables -----------------------------------------------------------------*/

/* Constants -----------------------------------------------------------------*/

/* Function prototypes -------------------------------------------------------*/

/* Functions -----------------------------------------------------------------*/

/**************************************************************************/
/*
    @brief  Main Program.
	@param  None.
    @retval None.
 */
/**************************************************************************/
int main(void)
{
	//Initialise Systick
	MillisecondTimer::initialise();

	F4Discovery board;

	while(1){
		if( board.button.getState() ){
			board.led1.On();
			MillisecondTimer::delay(100);
			board.led4.Off();
			MillisecondTimer::delay(100);
			board.led2.On();
			MillisecondTimer::delay(100);
			board.led1.Off();
			MillisecondTimer::delay(100);
			board.led3.On();
			MillisecondTimer::delay(100);
			board.led2.Off();
			MillisecondTimer::delay(100);
			board.led4.On();
			MillisecondTimer::delay(100);
			board.led3.Off();
			MillisecondTimer::delay(100);
		}
		else{
			board.led1.On();
			board.led2.On();
			board.led3.On();
			board.led4.On();
			MillisecondTimer::delay(400);
			board.led1.Off();
			board.led2.Off();
			board.led3.Off();
			board.led4.Off();
			MillisecondTimer::delay(400);
		}
	}

}

/* End Of File ---------------------------------------------------------------*/

