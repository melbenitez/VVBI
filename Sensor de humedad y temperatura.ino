#include <Wire.h>                  
#include <LiquidCrystal_I2C.h>     
LiquidCrystal_I2C lcd(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);//Direccion de LCD
#include "DHT.h"
#define DHTPIN 9 //Conectamos el Sensor al pin digital 9
#define DHTTYPE DHT11 
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  lcd.begin(16,2);// Indicamos medidas de LCD
  dht.begin();
  pinMode(13, OUTPUT);
}
void loop() { 
  int h = dht.readHumidity();    // Lee la humedad
  int t= dht.readTemperature();
  /////////////////////////////////////////////////// 
  lcd.clear();//Elimina todos los simbolos del LCD
  lcd.setCursor(0,0);//Posiciona la primera letra despues del segmento 5 en linea 1              
  lcd.print("    Humedad ");
  lcd.setCursor(6,1);
  lcd.print(h);//Escribe la humedad
  lcd.print(" %");                     
  delay (2500);
  ///////////////////////////////////////////////////              
  lcd.clear();
  lcd.setCursor(3,0);
  lcd.print("Temperatura "); 
  lcd.setCursor(6,1);
  lcd.print(t);//Escribe la temperatura
  lcd.print(" C'");                   
  delay (2500);
  ///////////////////////////////////////////////////             
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("      Green ");
  lcd.setCursor(0,1);        // go to the 2nd line
  lcd.print("      House ");                     
  delay (2500);
  if (t<=22){
      digitalWrite(13, HIGH);
  }
  if (t>=25){
      digitalWrite(13, LOW);    
  }
}
