const byte pHpin = A3;
float PHValue;

void setup() {
  Serial.begin(9600);

}

void loop() {
  //SensorPH
        
        PHValue = (1023 - analogRead(pHpin)) / 73.07;
        Serial.println(String(PHValue)+" ph");
        delay(1000);

}
