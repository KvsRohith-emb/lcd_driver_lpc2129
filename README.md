# LCD Driver for 16x2 Display using LPC2129

## Description
This project demonstrates a basic LCD driver written in Embedded C for the HD44780-compatible 16x2 LCD, using 8-bit mode on an LPC2129 microcontroller.

## Features
- Display character, string, integer, and float
- Control LCD using GPIO (RS, RW, EN)
- 8-bit data transfer via P0.8–P0.15
- Display custom characters using CGRAM

## Pin Configuration
| LCD Pin | LPC2129 Port |
|---------|---------------|
| RS      | P0.16         |
| RW      | P0.17         |
| EN      | P0.18         |
| D0–D7   | P0.8–P0.15     |

## Files
- `main.c` – test code to print name
- `lcd.c` – driver logic
- `lcd.h` – function declarations
- `lcd_defines.h` – macros for pin mapping

## Tools Used
- Keil uVision
- Proteus (simulation)
- Flash Magic (programming)

## Output Preview
