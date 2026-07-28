#pragma once
#include "Module.h"
#include <Adafruit_SSD1306.h>

class wireModule : public Module {
    void init() override {/*Insert wire Void SetUp + Variable Def here*/} //Replace with wire relevant functions
    void update() override {/*Insert wire Void Update here*/}
    bool isSolved() override {return solved;}
    void render(Adafruit_SSD1306 & display) override {/*Put visualisation on screen here (void render)*/}
    private: //Only applies for wire game
        bool solved = false;
}