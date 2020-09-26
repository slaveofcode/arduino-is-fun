
#include <AccelStepper.h>

#define FULLSTEP 4
#define HALFSTEP 8

#define motorPin1 8
#define motorPin2 9
#define motorPin3 10
#define motorPin4 11

AccelStepper stepper(FULLSTEP, motorPin1, motorPin3, motorPin2, motorPin4);

void setup() {
  // 1 revolution motor CCW
  stepper.setMaxSpeed(1250.0);
  stepper.setAcceleration(50.0);
  stepper.setSpeed(200);
  stepper.moveTo(-2048);
}

void loop() {
  if (stepper.distanceToGo() == 0) {
    stepper.moveTo(-stepper.currentPosition());
  }

  stepper.run();
}
