int led_2 = 12;
int delayInMs = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(led_2, OUTPUT);
}

void loop() {
  digitalWrite(led_2, HIGH);
  delay(delayInMs);         
  digitalWrite(led_2, LOW);
  delay(50);                                                                                                                                                                                                                                                                                                                                     
}
