#include "main.h"

Motor indexer (1, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);

Potentiometer potent('A');

int counter = 0;

void indexerLimit() {
  if (potent.controllerGet() < 0) {
    indexer.moveVelocity(-400);
}
}
void updateIndexer() {
  if (controller.getDigital(ControllerDigital::up) == 1) {
    indexer.moveVelocity(600);
}
  else if(controller.getDigital(ControllerDigital::down) == 1) {
    counter = counter + 1;
    if ((counter % 2) == 1) {
        indexer.moveVelocity(0);
      }
    else if ((counter % 2) == 0) {
      indexer.moveVelocity(-400);
    }
    }

  else {
        indexer.moveVelocity(-100);

  }



}
