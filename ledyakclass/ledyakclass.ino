#include "butonled.h"
ButonLed b(5,4);
void setup() {
b.setup();

}



void loop() {
  b.attach();

}
