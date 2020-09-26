int button = 12;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
}

void loop() {
  int btnState = digitalRead(button);
  Serial.println(btnState)   ;
  delay(10);
}
