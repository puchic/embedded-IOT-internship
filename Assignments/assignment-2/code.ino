int led = 9;
int brightness = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {

  for (brightness = 0; brightness <= 100; brightness++) {
    for (int i = 0; i < 10; i++) {   
      digitalWrite(led, HIGH);
      delay(brightness);             
      digitalWrite(led, LOW);
      delay(100 - brightness);      
    }
  }
  
  for (brightness = 100; brightness >= 0; brightness--) {
    for (int i = 0; i < 10; i++) {
      digitalWrite(led, HIGH);
      delay(brightness);
      digitalWrite(led, LOW);
      delay(100 - brightness);
    }
  }

}

