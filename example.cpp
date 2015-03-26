#include <util/delay.h>
#include "tm1637.h"

int main()
{
    TM1637 disp;

    uint16_t i =0;
    while (i <= 9999)
        disp.setNumber(i++);

    disp.scrollChars("Hello World");

    disp.setChars("done");

    while(1) {}
}
