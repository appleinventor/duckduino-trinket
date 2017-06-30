#include <ProTrinketKeyboard.h>

void setup() {
  // put your setup code here, to run once:
  TrinketKeyboard.begin();
  
  delay(500);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_GUI, KEYCODE_R);
  TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("cmd"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  delay(150);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_MOD_LEFT_SHIFT, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  delay(400);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_Y);
  TrinketKeyboard.pressKey(0,0);

  delay(500);
  
  TrinketKeyboard.print(F("copy con \"%userprofile%\\AppData\\Matrix.bat\""));

  delay(150);
  
  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  delay(150);
  
  TrinketKeyboard.print(F("@echo off"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);
  
  TrinketKeyboard.print(F("color 2"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);
  
  TrinketKeyboard.print(F(":start"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);
  
  TrinketKeyboard.print(F("echo %random%%random%%random%%random%%random%%random%%random%%random%%random%%random%"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);
  
  TrinketKeyboard.print(F("goto start"));
  delay(100);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_Z);
  TrinketKeyboard.pressKey(0,0);

  delay(100);

  TrinketKeyboard.print(F("\"%userprofile%\\Appdata\\Matrix.bat\""));
}

void loop() {
  // put your main code here, to run repeatedly:

}
