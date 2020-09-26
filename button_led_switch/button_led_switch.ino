int button = 12;
int led = 2;
int led2 = 5;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT); 
  pinMode(led2, OUTPUT); 
}

void loop() {
  int btnState = digitalRead(button);
  Serial.println(btnState);

  if (btnState) {
    digitalWrite(led, HIGH);
    digitalWrite(led2, LOW);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(led2, HIGH);
  }
  
  delay(1);
}
