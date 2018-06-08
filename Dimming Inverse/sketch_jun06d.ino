const int POT=0;
int val = 0;
int LED = 9;
int WLED = 10;
int valu = 0;
int otha = 0;
int more = 0;

const int MIN_POT=0;
const int MAX_POT=1024;
int vals = 0;
int valus = 0;
int diff = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(WLED, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  vals = analogRead(POT);
  otha = map(vals, MIN_POT, MAX_POT, 255, 0);
  analogWrite(LED, otha);
  more = map(vals, MIN_POT, MAX_POT, 0, 255);
  analogWrite(WLED, more);

}
  

