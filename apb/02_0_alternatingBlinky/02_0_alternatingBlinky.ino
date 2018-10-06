
int switchState = 0;

void setup() {
  // open the serial port at 9600 bps:
  Serial.begin(9600);
  // put your setup code here, to run once:
  // red
  pinMode(5, OUTPUT);
  // red
  pinMode(4, OUTPUT);
  // green
  pinMode(3, OUTPUT);
  // get voltage from switch
  pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  

  if(switchState == LOW){
    
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW); 
   } else{
     Serial.println(switchState);
    digitalWrite(3, LOW); 
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH); 

    delay(250);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW); 
    delay(250);
    
    }

}
