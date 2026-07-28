#pragma once
#include "Module.h"
#include <Adafruit_SSD1306.h>

class SimonSaysModule : public Module {
    void init() override {/*Insert SimonSays Void SetUp + Variable Def here*/} //Replace with SimonSays relevant functions
    void update() override {/*Insert SimonSays Void Update here*/}
    bool isSolved() override {return solved;}
    void render(Adafruit_SSD1306 & display) override {/*Put visualisation on screen here (void render)*/}
    private: //Only applies for Simon Says game
        bool solved = false;
}