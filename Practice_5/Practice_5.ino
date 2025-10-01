
const int buttonPin = 2;
const int RledPin = 3;
const int GledPin = 4;
const int BledPin = 5;

int buttonState = 0;
int ledcolor = 0;

bool ButtonPressed = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(RledPin, OUTPUT);
  pinMode(GledPin, OUTPUT);
  pinMode(BledPin, OUTPUT);

  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH && !ButtonPressed) {
    ledcolor = ledcolor + 1;
    ButtonPressed = true;
    //delay(100);
  }
  if(buttonState == LOW && ButtonPressed) {
    ledcolor = ledcolor + 1;
    ButtonPressed = true;
    //delay(100);
  }
  if(ledcolor == 0){
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  // RED
  else if (ledcolor == 1) {
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 2) {
    // GREEN
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 4) {
    // RED
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, HIGH);
  }
  else if (ledcolor == 5) {
    // PURPLE
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, HIGH);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 6) {
    // CYAN
    digitalWrite(RledPin, HIGH);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  }
  else if (ledcolor == 7) {
    // WHITE
    digitalWrite(RledPin, LOW);
    digitalWrite(GledPin, LOW);
    digitalWrite(BledPin, LOW);
  }
  else if(ledcolor == 8){
    ledcolor = 0;
  }
}
