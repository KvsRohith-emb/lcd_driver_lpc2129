#include <LPC21xx.h>
#include "lcd.h"
#include "delay.h"

int main(void)
{
    InitLCD();                         // Initialize LCD
    CmdLCD(GOTO_LINE1_POS0);          // Set cursor to Line 1, Position 0
    StrLCD("ROHITH");                 // Display your name

    CmdLCD(GOTO_LINE2_POS0);          // Move to Line 2
    StrLCD("Vector India");           // Display institute name

    while(1);                         // Infinite loop
}
