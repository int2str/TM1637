#include "tm1637.h"
#include <util/delay.h>

int main() {
  TM1637 disp;
  disp.setNumber(1637);

  for (uint8_t b = 0; b != 8; ++b) {
    disp.setBrightness(b);
    _delay_ms(500);
  }

  disp.clear();

  uint16_t i = 0;
  while (i <= 9999)
    disp.setNumber(i++);

  disp.scrollChars("Hello World");

  disp.setChars("done");

  while (1) {
  }
}
