#include <dht.h>

dht DHT;

#define DHT22_PIN 11

void setup() {

  Serial.begin(115200);

}

void loop() {
  
    int chk = DHT.read22(DHT22_PIN);

    String Humidity  = String(DHT.humidity);
    String Temperature = String(DHT.temperature);
    String dataToSend = "DATA;" + Temperature + ";" + Humidity + "\n";

    Serial.print(dataToSend);
  
    delay(1000);

}
