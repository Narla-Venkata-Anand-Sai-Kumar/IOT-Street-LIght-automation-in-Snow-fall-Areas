#include <DHT.h>

void setup(){
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop(){
  // put your main code here, to run repeatedly:
  // int a= digitalRead(5);
  DHT dht(2,DHT11);
  int c=analogRead(A0);
  int a=dht.readHumidity();
  int b=dht.readTemperature();
  Serial.print("Humidity is : ");
  Serial.print(a);
  Serial.println();
  Serial.print("Temperature is : ");
  Serial.print(b);
  Serial.println();
  Serial.print("LDR Intensity is : ");
  Serial.print(c);
  Serial.println();
  if (c<=210 && b>=25 && a>=25){ 
    analogWrite(3,225);
  }
  else{
    analogWrite(3,0);
  }
delay(100);

}