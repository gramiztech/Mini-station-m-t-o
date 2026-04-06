
   #include <DHT.h>

int capteur = 11;
int boutton = 3;
int led = 7;
int buzzer = 9;

DHT dht(capteur, DHT11); 

void setup() {
  
  pinMode(boutton, INPUT_PULLUP); 
  pinMode(buzzer, OUTPUT);
  
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  int a;
  a = digitalRead(boutton);
  
  if (a == HIGH) 
  {
    digitalWrite(led, HIGH); 
    digitalWrite(buzzer, HIGH); 
    float Temperature;
    float humidity;
    Temperature = dht.readTemperature();
    humidity = dht.readHumidity() ;
      Serial.print("Température: ");
      Serial.print(Temperature);
      Serial.print(" °C | Humidité: ");
      Serial.print(humidity );
      Serial.print(" %");
      Serial.println(" ");
      delay(200);

  }
  else {
    digitalWrite(led, LOW); 
  
   } 
   }
  
  
