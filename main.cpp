#include "mbed.h"

#define SPEAKER p21
#define AIN1 p15
#define AIN2 p16

// Define the PWM speaker output
PwmOut speaker(SPEAKER);
// Define analog inputs
AnalogIn ain1(AIN1);
AnalogIn ain2(AIN2);


//Write your code here

//Define variables
/*----------------------------------------------------------------------------
 MAIN function
 *----------------------------------------------------------------------------*/
int main(){
    
    while(1){
        // Create a saw-tooth sound wave
        // Make the period and volume adjustable using the potentiometers
        
        for(float i = 0; i < 1 ; i+=0.05){
            speaker.period(0.004 - (0.002 * ain1));
            speaker = i*0.05* ain2;
        }
        wait_ms(1000);
    }
}
