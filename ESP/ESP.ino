



#include <ESP8266WiFi.h>
const char* ssid = "WFF";
const char* password = "petersbachstrasse";
WiFiServer server(80);
bool Taster = false;
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
  server.begin();
  Serial.println("Server gestartet");
  Serial.println(WiFi.localIP());
  pinMode(0,INPUT_PULLUP);
  
}

void loop() 
{
  int Schaltung = digitalRead(0);
  if(Schaltung)
  {
    Taster = false;
  }
  else
  {
    Taster = true;  
  }
  WiFiClient client = server.available();
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println("Connection: close");  // the connection will be closed after completion of the response
  client.println("Refresh: 5");  // refresh the page automatically every 5 sec
  client.println();
  client.println("<!DOCTYPE html>");
  client.println("<html xmlns='http://www.w3.org/1999/xhtml'>");
  client.println("<head>\n<meta charset='UTF-8'>");
  client.println("<title>ESP8266 Temperature & Humidity DHT11 Sensor</title>");
  client.println("</head>\n<body>");
  client.println("<H2> Hallo Welt</H2>");
  if(Taster)
  {
    client.println("<H3> Taster gedrückt</H3>");
  }
  else
  {
    client.println("<H3> Taster nicht gedrückt</H3>");
  }
  client.print("</body>\n</html>");
  delay(100);
 if(client)
 {
  Serial.println("Webseite wird abgerufen"); 
 }
}
