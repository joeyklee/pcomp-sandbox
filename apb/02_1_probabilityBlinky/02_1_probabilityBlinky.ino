
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

  if (switchState == LOW) {

    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } else {

    digitalWrite(3, LOW);

    if (random(0, 10) > 4) {
      digitalWrite(5, HIGH);
      digitalWrite(4, LOW);
      delay(250);
    } else {
      digitalWrite(4, HIGH);
      digitalWrite(5, LOW);
      delay(250);
    }


  }

}
