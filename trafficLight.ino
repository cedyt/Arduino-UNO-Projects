void setup() {
  pinMode(13,  OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop(){
 digitalWrite(13, HIGH);
 delay(5000);

 digitalWrite(13, LOW);
 digitalWrite(2, HIGH);
 delay(5000);

digitalWrite(2, LOW);
digitalWrite(12, HIGH);
delay(3000);

digitalWrite(12, LOW);
  }