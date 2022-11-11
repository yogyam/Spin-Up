#include "main.h"

Motor indexer (11, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);

Potentiometer potent('A');

int counter = 0;

void updateIndexer() {

  if (controller.getDigital(ControllerDigital::up) == 1) {

  // while(potent.get() < 450) {
  //   indexer.moveVelocity(-200);
  //   }
  // while(potent.get()>1400) {
  //     indexer.moveVelocity(600);
  // }
    if(potent.get()>720){
      while(potent.get()>100){
        indexer.moveVelocity(400);
      }
      if(potent.get() < 100) {
        while(potent.get() < 720){
          indexer.moveVelocity(-600);
        }

  }

}
}

else {
  indexer.moveVelocity(0);
}
  }
