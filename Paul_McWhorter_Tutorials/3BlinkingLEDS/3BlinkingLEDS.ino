int redLED=4;
int blueLED=8;
int yellowLED=13;
int fast=100;
int slow=750;
int verySlow=1500;
int repeatWait=2500;


void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
  pinMode(blueLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // RED LED CODE START
  digitalWrite(redLED,HIGH);
  delay(fast);
  digitalWrite(redLED,LOW);
  delay(fast);

  digitalWrite(redLED, HIGH);
  delay(fast);
  digitalWrite(redLED, LOW);
  delay(fast);

  digitalWrite(redLED, HIGH);
  delay(fast);
  digitalWrite(redLED, LOW);
  delay(fast);

  digitalWrite(redLED, HIGH);
  delay(fast);
  digitalWrite(redLED, LOW);
  delay(fast);

  digitalWrite(redLED, HIGH);
  delay(fast);
  digitalWrite(redLED, LOW);
  delay(fast);

  // --END OF RED LED CODE--



  // BLUE LED CODE START
  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  digitalWrite(blueLED, HIGH);
  delay(verySlow);
  digitalWrite(blueLED, LOW);
  delay(verySlow);

  // --END OF BLUE LED CODE--

  // YELLOW LED CODE START
  digitalWrite(yellowLED, HIGH);
  delay(slow);
  digitalWrite(yellowLED, LOW);
  delay(slow);

  digitalWrite(yellowLED, HIGH);
  delay(slow);
  digitalWrite(yellowLED, LOW);
  delay(slow);

  digitalWrite(yellowLED, HIGH);
  delay(slow);
  digitalWrite(yellowLED, LOW);
  delay(slow);

  digitalWrite(yellowLED, HIGH);
  delay(slow);
  digitalWrite(yellowLED, LOW);
  delay(slow);

  digitalWrite(yellowLED, HIGH);
  delay(slow);
  digitalWrite(yellowLED, LOW);
  delay(slow);

  digitalWrite(yellowLED, HIGH);
  delay(slow);
  digitalWrite(yellowLED, LOW);
  delay(slow);

  digitalWrite(yellowLED, HIGH);
  delay(slow);
  digitalWrite(yellowLED, LOW);
  delay(slow);

  digitalWrite(yellowLED, HIGH);
  delay(slow);
  digitalWrite(yellowLED, LOW);
  delay(slow);

  digitalWrite(yellowLED, HIGH);
  delay(slow);
  digitalWrite(yellowLED, LOW);
  delay(slow);

  digitalWrite(yellowLED, HIGH);
  delay(slow);
  digitalWrite(yellowLED, LOW);
  delay(slow);

  // --END OF YELLOW LED CODE--

  delay(repeatWait);
  
}
