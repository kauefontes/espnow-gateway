#include <esp-now.h>
#include <WiFi.h>

void setup() {}

void loop() {}

void initialSetup()
{
  Serial.begin(115200);
  Serial.println("");
  Serial.println("Starting Gateway...");
  WiFi.mode(WIFI_STA);
}
