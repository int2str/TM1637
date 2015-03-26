# AVR C++ library for the TM1637 LED driver

## About
The TM1637 LED driver can be found in a variety of inexpensive 4-digit
7-segment LED displays. This "library" allows control of the module and
integration into AVR based projects.

## Features
* AVR C++
* Significantly faster than existing implementations
* Simple to use
* Light weight

## Usage
Simply add tm1637.h/.cpp to your project. Make sure tor *change the port
assignments in tm1637.h*. If your display unit has more than 4 digits, also
adjust TM1637_DIGITS.

## Limitations
Currently the two pins necessary to drive the chip (CLK - Clock; DIO - Data)
have to be on the same I/O registers (ex. PORTB). This is largely because
of how the direct pin mapping is implemented.

The TM1637 can also be used as a keyboard/button driver. The code to read the
buttons is not implemented. Could be added if there is a board out there that
is wired up to that effect.

## Compiling / uploading

Simply run _make_ to compile the provided example.
_make upload_ will upload the hex file to your device, specified in
Makefile.inc.

## Revision history
* v1.00 - Initial release

