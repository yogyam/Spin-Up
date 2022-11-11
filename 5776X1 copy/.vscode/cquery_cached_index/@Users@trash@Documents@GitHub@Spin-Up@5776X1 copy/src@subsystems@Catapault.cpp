#include "main.h"

Motor catapault (15, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);


void updateCata() {
  if (controller.getDigital(ControllerDigital::L1) == 1){
    catapault.moveVelocity(-600);
    //600 is max, -600 is min, - is reverse
  }
  else if (controller.getDigital(ControllerDigital::L2) == 1) {
    catapault.moveVelocity(200);
  }
  else{
    catapault.moveVelocity(0);
  }
}
