int red = 9;
int green = 10;
int blue = 11;
int button = 2;

int press = 0;
int lastState = LOW;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {

  int currentState = digitalRead(button);

  if (currentState == HIGH && lastState == LOW) {
    press++;
    delay(200); 
  }

  if (press == 1) {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
  }
  else if (press == 2) {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
  }
  else if (press == 3) {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
  }
  else if (press > 3) {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    press = 0; 
  }

  lastState = currentState;
}