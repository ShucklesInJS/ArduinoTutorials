// define acts as a static value
// varaiables are able to be changed while sketch is running

#define LED 13
//int LED=13;
int dit = 50;
int dah = 150;
int wait = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, trun repeatedly:

  // SOS in morse code it 3 dits (S), 3 dahs (O), 3 dits (S)

  // First S
  digitalWrite(LED,HIGH);
  delay(dit);
  digitalWrite(LED,LOW);
  delay(dit);

  digitalWrite(LED,HIGH);
  delay(dit);
  digitalWrite(LED,LOW);
  delay(dit);

  digitalWrite(LED,HIGH);
  delay(dit);
  digitalWrite(LED,LOW);
  delay(dit);

  // O in morse code
  digitalWrite(LED,HIGH);
  delay(dah);
  digitalWrite(LED,LOW);
  delay(dah);

  digitalWrite(LED,HIGH);
  delay(dah);
  digitalWrite(LED,LOW);
  delay(dah);

  digitalWrite(LED,HIGH);
  delay(dah);
  digitalWrite(LED,LOW);
  delay(dah);

  // Second S
  digitalWrite(LED,HIGH);
  delay(dit);
  digitalWrite(LED,LOW);
  delay(dit);

  digitalWrite(LED,HIGH);
  delay(dit);
  digitalWrite(LED,LOW);
  delay(dit);

  digitalWrite(LED,HIGH);
  delay(dit);
  digitalWrite(LED,LOW);
  //delay(dit);

  // added delay so our S's don't loop into each other
  delay(wait);
}
