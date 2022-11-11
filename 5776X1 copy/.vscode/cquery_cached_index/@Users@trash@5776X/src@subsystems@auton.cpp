#include "main.h"
#include "subsystemsHeaders/drive.hpp"


void start() {
  std::shared_ptr<AsyncPositionController<double, double>> intakeControl =
  AsyncPosControllerBuilder().withMotor(intake).build();

  std::shared_ptr<AsyncPositionController<double, double>> flywheelcontrol =
  AsyncPosControllerBuilder().withMotor({flywheel1, flywheel2}).build();
  drive->turnAngle(180_deg);


  intakeControl->setTarget(500);
  drive->turnAngle(180_deg);
  flywheelcontrol->setTarget(500);
}


pros::ADIEncoder rightTracking ('A', 'B', true);
pros::ADIEncoder leftTracking ('C', 'D', true);
