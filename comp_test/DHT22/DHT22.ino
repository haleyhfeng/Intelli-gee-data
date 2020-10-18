/////////////////////////////////////////////////
// Author   : Allen Wu
// Date     : Oct. 18 2020
// Purpose  : Test DHT22 functionality
// Hardware : Connect DHT22 VCC to Arduino 5V
//                          GND to         GND
//                          DAT to         Pin 2
/////////////////////////////////////////////////
#include "DHT.h"

#define OUT_DHT 2
#define TYPE DHT22

DHT dht22(OUT_DHT, TYPE);

void setup() {
  Serial.begin(9600);
  dht22.begin();
}

void loop() {
  float humidity = dht22.readHumidity();
  float temperature = dht22.readTemperature();
  
  Serial.print("Humidity:");
  Serial.print(humidity);
  Serial.println("%");
  Serial.print("Temperature:");
  Serial.print(temperature);
  Serial.println("°C");
  delay(1000);
}
