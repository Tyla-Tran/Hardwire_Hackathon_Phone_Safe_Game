#pragma once
#include "Module.h"
#include <Adafruit_SSD1306.h>

class lockModule : public Module {
    void init() override {/*Insert lock Void SetUp + Variable Def here*/} //Replace with lock relevant functions
    void update() override {/*Insert lock Void Update here*/}
    bool isSolved() override {return solved;}
    void render(Adafruit_SSD1306 & display) override {/*Put visualisation on screen here (void render)*/}
    private: //Only applies for lock game
        bool solved = false;
}
