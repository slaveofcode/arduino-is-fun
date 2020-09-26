#include <Stepper.h>

// step per internal motor revolution
const float STEPS_PER_REV = 32;

// amount of Gear Reduction
const float GEAR_REDUCTION = 64;

const float STEPS_PER_OUT_REV = STEPS_PER_REV * GEAR_REDUCTION;

int stepsRequired;

// pin used
// IN1 = pin 8
// IN2 = pin 9
// IN3 = pin 10
// IN4 = pin 11

Stepper steppermotor(STEPS_PER_REV, 8, 10, 9, 11);

void setup() {
  // already setup via stepper library above
}

void loop() {
  // Slow, 4-stap CW (ClockWise) sequence 
  // to observe lights on driver board
  steppermotor.setSpeed(1);
  stepsRequired = 4;
  steppermotor.step(stepsRequired);
  delay(2000);

  // Rotate CW 1/2 turn slowly
  stepsRequired = STEPS_PER_OUT_REV / 2;
  steppermotor.setSpeed(100);
  steppermotor.step(stepsRequired);
  delay(1000);

  // Rotate CCW (Counter Clockwise) 1/2 turn quickly
  stepsRequired = -STEPS_PER_OUT_REV / 2;
  steppermotor.setSpeed(700);
  steppermotor.step(stepsRequired);
  delay(200);
}
