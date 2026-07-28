#pragma once
#include "Module.h"
#include <Adafruit_SSD1306.h>

class mazeModule : public Module {
    void init() override {/*Insert maze Void SetUp + Variable Def here*/} //Replace with maze relevant functions
    void update() override {/*Insert maze Void Update here*/}
    bool isSolved() override {return solved;}
    void render(Adafruit_SSD1306 & display) override {/*Put visualisation on screen here (void render)*/}
    private: //Only applies for maze game
        bool solved = false;
}