#include <ProTrinketKeyboard.h>
/*#include <HID-Project.h>
#include <HID-Settings.h>
*/
// Utility function
void setup()
{
  // Start Keyboard and Mouse
  TrinketKeyboard.begin();
}

void loop() {
  TrinketKeyboard.poll();
  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_GUI, KEYCODE_R);
  TrinketKeyboard.pressKey(0, 0);
  delay(150);
  TrinketKeyboard.print("notepad");
  delay(10);
  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0, 0);
  delay(200);
  TrinketKeyboard.print("Hello, World!");
  while (true) {
    
  }
}

