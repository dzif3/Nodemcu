
#define BLYNK_PRINT Serial // digunakan untuk monitor blynk di serial



#include <ESP8266WiFi.h> // file untuk modul wifi
#include <BlynkSimpleEsp8266.h> // file untuk blynk 

char auth[] = "YourAuthToken"; //token yang dikirim oleh blynk

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "YourNetworkName";
char pass[] = "YourPasswordhostpotmu";

void setup() // fungsi utama, dijalankan sekali
{
  // Debug console
  Serial.begin(9600); // untuk monitor di serial print

  Blynk.begin(auth, ssid, pass); // menjalankan blynk sesuai token, wifi, dan passwordnya
  
}

void loop()// fungsi utama dijalankan berulang kali
{
  Blynk.run(); //perintah untuk menjalankan blynk
}
