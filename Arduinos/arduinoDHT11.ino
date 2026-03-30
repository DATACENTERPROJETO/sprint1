#include "DHT.h"

#define TIPO_SENSOR DHT11
const int PINO_SENSOR_DHT11 = A0;

DHT sensorDHT(PINO_SENSOR_DHT11, TIPO_SENSOR);

void setup() {
   Serial.begin(9600);
   sensorDHT.begin();
}

void loop() {
  float umidade = sensorDHT.readHumidity();
  float temperatura = sensorDHT.readTemperature();

  if (isnan(temperatura) || isnan(umidade)) {
    Serial.println("Erro ao ler os dados do sensor");
  } else {
    //Serial.print("UmidadeMaxima:");
    //Serial.print(55);
    //Serial.print(" ");
    //Serial.print("Umidade(%):");
    Serial.print(umidade);
    //Serial.print(" ");
    //Serial.print("UmidadeMinima:");
    //Serial.print(40);
    //Serial.print(" ");
    //Serial.print("TemperaturaMaxima:");
    //Serial.print(27);
    Serial.print(";");
    //Serial.print("Temperatura(C°):");
    Serial.println(temperatura);
    //Serial.print(" ");
    //Serial.print("TemperaturaMinima:");
    //Serial.print(18);
    //Serial.print(" ");
  }

    delay(1000);
}
