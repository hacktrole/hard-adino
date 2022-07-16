void setup() {
 pinMode(7,OUTPUT);
  pinMode(10,OUTPUT);
   pinMode(9,OUTPUT);
}

void loop() {
 
digitalWrite(7,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
delay(70);
digitalWrite(7,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
delay(70);
}
