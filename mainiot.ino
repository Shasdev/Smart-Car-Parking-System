

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = "dmuKrsrtY0ZztKXPcdkCSQexIBddI_R8";
char ssid[] = "Digisol";
char pass[] = "";

#define SENSOR_1 5
#define SENSOR_2 4
#define SENSOR_3 0
#define SENSOR_4 14

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass,IPAddress(117,236,190,213),8080);
  pinMode(SENSOR_1, INPUT);
  pinMode(SENSOR_2, INPUT);
  pinMode(SENSOR_3, INPUT);
  pinMode(SENSOR_4, INPUT);

}

void loop()
{
  int status_1 = digitalRead(SENSOR_1);
  int status_2 = digitalRead(SENSOR_2);
  int status_3 = digitalRead(SENSOR_3);
  int status_4 = digitalRead(SENSOR_4);
  
  if (status_1 == HIGH) {
    Blynk.virtualWrite(V1, 0); // Turn on LED widget for parking spot 1
  } else {
    Blynk.virtualWrite(V1, 255);   // Turn off LED widget for parking spot 1
  }
  
  if (status_2 == HIGH) {
    Blynk.virtualWrite(V2, 255); // Turn on LED widget for parking spot 2
  } else {
    Blynk.virtualWrite(V2, 0);   // Turn off LED widget for parking spot 2
  }
  if (status_3 == HIGH) {
    Blynk.virtualWrite(V3, 0); // Turn on LED widget for parking spot 1
  } else {
    Blynk.virtualWrite(V3, 255);   // Turn off LED widget for parking spot 1
  }
  if (status_4 == HIGH) {
    Blynk.virtualWrite(V4, 0); // Turn on LED widget for parking spot 1
  } else {
    Blynk.virtualWrite(V4, 255);   // Turn off LED widget for parking spot 1
  }
  
  delay(500);
}
//jjQju6NcEad_azOs48HlhLIXBU-lpLKH
