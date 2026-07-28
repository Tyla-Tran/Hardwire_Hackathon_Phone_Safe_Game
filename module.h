#pragma once //Define once

class Module { //Blueprint
  public: //Other files are able to access
  virtual void init() = 0; //Set Up
  //Virtual ensures each module can have its unique initialisation
  virtual void update() = 0; //Check updates
  virtual bool isSolved() = 0; //Solved = True, Not Solved = False
  virtual void render(Adafruit_SSD1306 & display) = 0; //Draws on LCD
};
