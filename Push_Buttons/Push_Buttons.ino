/*
 * Jerrys Push Buttons
 */
int Pin1 =2;
int Pin2 =3;
int Pin3 =4;
int Pin4 =7;
int Pin5 =8;
bool left = true;

void setup() {
  // put your setup code here, to run once:
  pinMode(Pin1, OUTPUT);
  pinMode(Pin2, OUTPUT);
  pinMode(Pin3, OUTPUT);
  pinMode(Pin4, OUTPUT);
  pinMode(Pin5, OUTPUT);
  digitalWrite(Pin1, LOW);
  digitalWrite(Pin2, LOW);
  digitalWrite(Pin3, LOW);
  digitalWrite(Pin4, LOW);
  digitalWrite(Pin5, LOW);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(11) == HIGH){
    digitalWrite(Pin5, HIGH);
    delay(500);
    digitalWrite(Pin5, LOW);
    digitalWrite(Pin4, HIGH);
    delay(500);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin3, HIGH);
    delay(500);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin2, HIGH);
    delay(500);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin1, HIGH);
    delay(500);
    digitalWrite(Pin1, LOW);
    
  }
  else if(digitalRead(6) == HIGH){
    digitalWrite(Pin1, HIGH);
    delay(500);
    digitalWrite(Pin1, LOW);
    digitalWrite(Pin2, HIGH);
    delay(500);
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, HIGH);
    delay(500);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, HIGH);
    delay(500);
    digitalWrite(Pin4, LOW);
    digitalWrite(Pin5, HIGH);
    delay(500);
    digitalWrite(Pin5, LOW);
  }

}
