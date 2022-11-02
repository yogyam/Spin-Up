#include "main.h"

Motor flywheel1 (14, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);
Motor flywheel2 (15, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);


void updateFlywheel() {
  if (controller.getDigital(ControllerDigital::L1) == 1){
    flywheel1.moveVelocity(-565);
    flywheel2.moveVelocity(565);
  }
  else if (controller.getDigital(ControllerDigital::L2) == 1) {
    flywheel1.moveVelocity(-500);
    flywheel2.moveVelocity(500);
  }
  else{
    flywheel1.moveVelocity(0);
    flywheel2.moveVelocity(0);
  }
}
