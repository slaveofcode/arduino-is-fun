int led = 9;
byte analogPin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // max potentiometer value is 1023
  // max analogWrite for led is 255
  // so we jut have to divide analog read with 4
  analogWrite(led, analogRead(analogPin) / 4);
  Serial.println(analogRead(analogPin));
  delay(10);
}
