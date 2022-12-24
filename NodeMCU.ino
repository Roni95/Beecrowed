#include <ESP8266HTTPClient.h>
#include <ESP8266WiFi.h>
#define REED_SWITCH 5 //D1

int status = WL_IDLE_STATUS; //not required.

const char* ssid = "My-WiFi";
const char* password = "12341234";
int doorClosed = 1;

void setup() {
  pinMode(REED_SWITCH, INPUT_PULLUP);
  Serial.begin(115200);
  setupWifi();
   
   //get_http();

}

void setupWifi()
{
   WiFi.mode(WIFI_STA);
   status = WiFi.begin(ssid, password);    
   Serial.print("Attempting to connect to SSID: ");
   Serial.println(ssid);  

   // Wait for connection
   while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
   }
   Serial.println("Connected to wifi");
}

void loop() {
   if (WiFi.status() != WL_CONNECTED)
   {
     setupWifi();
   }
  // put your main code here, to run repeatedly:
    if ((digitalRead(REED_SWITCH) == HIGH) && (doorClosed == 1))
    {
      Serial.println("DOOR OPEN!!");  
      doorClosed = 0;
    } 
    else if ((digitalRead(REED_SWITCH) == LOW) && (doorClosed == 0))
    {
      Serial.println("DOOR CLOSED!!");  
      doorClosed = 1;
    }
    delay(10);
}
