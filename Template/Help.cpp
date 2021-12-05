int pinA = 7;
int pinB = 6;
int pinC = 4;
int pinD = 3;
int pinE = 2;
int pinF = 8;
int pinG = 9;
int pinP = 5;

void setup() {
   pinMode(pinA, OUTPUT);
   pinMode(pinB, OUTPUT);
   pinMode(pinC, OUTPUT);
   pinMode(pinD, OUTPUT);
   pinMode(pinE, OUTPUT);
   pinMode(pinF, OUTPUT);
   pinMode(pinG, OUTPUT);
   pinMode(pinP, OUTPUT);
   pinMode(13, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(1, OUTPUT);
   pinMode(0, OUTPUT);
}

void loop() {

   // for Zero
   ///
   tone(0, 200, 1000);
   digitalWrite(1, LOW);
   digitalWrite(13, HIGH);
   digitalWrite(pinA, HIGH);
   digitalWrite(pinB, HIGH);
   digitalWrite(pinC, HIGH);
   digitalWrite(pinD, HIGH);
   digitalWrite(pinE, HIGH);
   digitalWrite(pinF, HIGH);
   digitalWrite(pinG, LOW);
   digitalWrite(pinP, LOW);
   delay(1000);

   // for one
   ///
   tone(0, 300, 100);
   digitalWrite(13, LOW);
   digitalWrite(12, HIGH);
   digitalWrite(pinA, LOW);
   digitalWrite(pinB, HIGH);
   digitalWrite(pinC, HIGH);
   digitalWrite(pinD, LOW);
   digitalWrite(pinE, LOW);
   digitalWrite(pinF, LOW);
   digitalWrite(pinG, LOW);
   digitalWrite(pinP, LOW);
   delay(1000);

   // for two
   ///
   tone(0, 500, 1000);
   digitalWrite(12, LOW);
   digitalWrite(11, HIGH);
   digitalWrite(pinA, HIGH);
   digitalWrite(pinB, HIGH);
   digitalWrite(pinC, LOW);
   digitalWrite(pinD, HIGH);
   digitalWrite(pinE, HIGH);
   digitalWrite(pinF, LOW);
   digitalWrite(pinG, HIGH);
   digitalWrite(pinP, LOW);
   delay(1000);

   // for threeLOW
   ///
   tone(0, 600, 100);
   digitalWrite(11, LOW);
   digitalWrite(10, HIGH);
   digitalWrite(pinA, HIGH);
   digitalWrite(pinB, HIGH);
   digitalWrite(pinC, HIGH);
   digitalWrite(pinD, HIGH);
   digitalWrite(pinE, LOW);
   digitalWrite(pinF, LOW);
   digitalWrite(pinG, HIGH);
   digitalWrite(pinP, LOW);
   delay(1000);

   // for four
   ///
   tone(0, 700, 1000);
   digitalWrite(10, LOW);
   digitalWrite(1, HIGH);
   digitalWrite(pinA, LOW);
   digitalWrite(pinB, HIGH);
   digitalWrite(pinC, HIGH);
   digitalWrite(pinD, LOW);
   digitalWrite(pinE, LOW);
   digitalWrite(pinF, HIGH);
   digitalWrite(pinG, HIGH);
   digitalWrite(pinP, LOW);
   delay(1000);

   // for five
   ///
   tone(0, 800, 100);
   digitalWrite(1, LOW);
   digitalWrite(13, HIGH);
   digitalWrite(pinA, HIGH);
   digitalWrite(pinB, LOW);
   digitalWrite(pinC, HIGH);
   digitalWrite(pinD, HIGH);
   digitalWrite(pinE, LOW);
   digitalWrite(pinF, HIGH);
   digitalWrite(pinG, HIGH);
   digitalWrite(pinP, LOW);
   delay(1000);

   // for six
   ///
   tone(0, 900, 1000);
   digitalWrite(13, LOW);
   digitalWrite(12, HIGH);
   digitalWrite(pinA, HIGH);
   digitalWrite(pinB, LOW);
   digitalWrite(pinC, HIGH);
   digitalWrite(pinD, HIGH);
   digitalWrite(pinE, HIGH);
   digitalWrite(pinF, HIGH);
   digitalWrite(pinG, HIGH);
   digitalWrite(pinP, LOW);
   delay(1000);

   // FOR SEVEN
   ///
   tone(0, 1000, 100);
   digitalWrite(12, LOW);
   digitalWrite(11, HIGH);
   digitalWrite(pinA, HIGH);
   digitalWrite(pinB, HIGH);
   digitalWrite(pinC, HIGH);
   digitalWrite(pinD, LOW);
   digitalWrite(pinE, LOW);
   digitalWrite(pinF, LOW);
   digitalWrite(pinG, LOW);
   digitalWrite(pinP, LOW);
   delay(1000);

   // FOR EIGHT
   ///
   tone(0, 1100, 1000);
   digitalWrite(11, LOW);
   digitalWrite(10, HIGH);
   digitalWrite(pinA, HIGH);
   digitalWrite(pinB, HIGH);
   digitalWrite(pinC, HIGH);
   digitalWrite(pinD, HIGH);
   digitalWrite(pinE, HIGH);
   digitalWrite(pinF, HIGH);
   digitalWrite(pinG, HIGH);
   digitalWrite(pinP, LOW);
   delay(1000);

   // FOR NINE
   ///
   tone(0, 1200, 100);
   digitalWrite(10, LOW);
   digitalWrite(1, HIGH);
   digitalWrite(pinA, HIGH);
   digitalWrite(pinB, HIGH);
   digitalWrite(pinC, HIGH);
   digitalWrite(pinD, HIGH);
   digitalWrite(pinE, LOW);
   digitalWrite(pinF, HIGH);
   digitalWrite(pinG, HIGH);
   digitalWrite(pinP, LOW);
   delay(1000);
}