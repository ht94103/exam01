// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library

//

#include "mbed.h"

#include "uLCD_4DGL.h"


uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;


int main()

{

    //uLCD.line(int 0, int 1, int 1, int 1, int white); //Default Green on black text

    uLCD.printf("\n  106061271/n");

}
