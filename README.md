# Physical Computing Sandbox

A repo to document and share experiments, progress, and learning physical computing (pcomp).


Arduino Reference: https://www.arduino.cc/reference/en/

## Handy Notes

### analogRead(pin)
```
analogRead()
```
* read in the pin number of your analog input
* e.g. if you want to read in the analog values returned from a sensor
* return `int(0 to 1023)`


### analogWrite(pin, value)
```
analogWrite(pin, value)
```
* "Can be used to light a LED at varying brightnesses or drive a motor at various speeds. After a call to analogWrite(), the pin will generate a steady square wave of the specified duty cycle until the next call to analogWrite() (or a call to digitalRead() or digitalWrite()) on the same pin." - https://www.arduino.cc/reference/en/language/functions/analog-io/analogwrite/
* value should be between 0 (off) or 255(on)
* NOTE: The analogWrite function has nothing to do with the analog pins or the analogRead function.

### pinMode(pin, INPUT/OUTPUT)

```
int ledPin = 13;   // LED connected to digital pin 13
int buttonPin = 7;     // pushbutton connected to digital pin 7

pinMode(buttonPin, INPUT) // input is the HIGH or LOW returned from digitalRead()
pinMode(ledPin, OUTPUT) // output is the light up
```

* e.g. INPUT could be for a push button
* e.g. OUTPUT could be to light up an LED or make a component do something


### digitalRead(pin)

```
digitalRead(13)
```
* get the value returned `high` or `low` from a digital pin
* If the pin isn’t connected to anything, digitalRead() can return either HIGH or LOW (and this can change randomly).
* The analog input pins can be used as digital pins, referred to as A0, A1, etc.

### digitalWrite(pin, HIGH/LOW)

```
digitalWrite(13, LOW); // turn pin 13 off
delay(250);
digitalWrite(13, HIGH); // turn pin 13 on
```

* send a HIGH or LOW to the specified pin
* HIGH turns the thing on
* LOW turns the thing off


# See examples by folder

***
## [Arduino Projects Book](/apb)
***
