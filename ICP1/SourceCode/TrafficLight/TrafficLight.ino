int switchState = 0;
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop(){

  digitalWrite(3, HIGH); //green LED
  digitalWrite(4, LOW); //Red LED
  digitalWrite(5, LOW); //red LED
  
  delay(5000);

  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  
   delay(3000);

  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);

  delay(5000);
  }
