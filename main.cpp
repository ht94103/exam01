// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
PwmOut PWM1(D6), PWM2(D5);
float PWMdata[512];

int main()

{

    //uLCD.line(int 0, int 1, int 1, int 1, int white); //Default Green on black text
    uLCD.rectangle(0, 0, 120, 120, 0xFFFFFF);
    uLCD.printf("\n\n\n\n\n\n\n    106061271");
    PWM1.period(0.001);
    //while(1){
        for (int i = 0; i <= 1; i = i + 0.1){
            PWM1 = i;
            wait(0.1);

        }
        for (int i = 1; i >= 0; i = i - 0.1){
            PWM1 = i;
            wait(0.1);
        }        
    //}
   


}
