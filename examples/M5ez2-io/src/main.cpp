#include <Arduino.h>

#include <M5Unified.h>
#include "menu.h"

int playingIndex = 0;


void setup(void) {

    Serial.begin(115200);
    Serial.println("Start");

    M5.begin();
    M5.Power.begin();

    menu_init();
}

void loop(void) 
{   
    menu_loop();
}

