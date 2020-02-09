



#include <ESP8266WiFi.h>
const char* ssid = "WFF";
const char* password = "petersbachstrasse";
 void setup() 
{
  Serial.begin(115200);
  
  delay(10);
  Serial.println("Start");
  WiFi.begin(ssid,password);
  while (WiFi.status() != WL_CONNECTED)
  {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi verbunden");
}

void loop() {
  Serial.println("IN LOOP");
  delay(1000);

}
