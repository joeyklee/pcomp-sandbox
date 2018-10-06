const int sensorPin = A0;

const float happyTemp = 21.5;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // open serial port


  for(int pinNumber = 3; pinNumber < 6; pinNumber++){
      pinMode(pinNumber, OUTPUT);
      digitalWrite(pinNumber, LOW);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorVal = analogRead(sensorPin);
  // the result of sensorVal will be between 0 and 1023
  float voltage = (sensorVal/1024.0) * 5.0;
  // convert voltage to temperature in degrees celcius
  float temperature = (voltage - 0.5) * 100;

  Serial.println("Temperature Celsius: ");
  Serial.println(temperature);

  if(temperature < happyTemp){
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
   } else if (temperature > happyTemp && temperature <= happyTemp + 1){
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    } else if (temperature > happyTemp+1 && temperature <= happyTemp + 4){
      digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    } else if (temperature > happyTemp+4){
      digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    }
    

  delay(1000);
}

