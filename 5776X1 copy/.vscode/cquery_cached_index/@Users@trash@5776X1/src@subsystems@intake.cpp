#include "main.h"

Motor intake (10,  false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);

void updateIntake() {
  if (controller.getDigital(ControllerDigital::R1)){
    intake.moveVelocity(600);
  }
  else if(controller.getDigital(ControllerDigital::R2)) {
    intake.moveVelocity(-600);
  }
  else {
    intake.moveVelocity(0);
  }

}
