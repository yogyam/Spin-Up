#include "main.h"

using namespace okapi;

Motor DriveRightFront (2, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);
Motor DriveRightBack (3, false, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);
Motor DriveLeftFront (5, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);
Motor DriveLeftBack (9, true, AbstractMotor::gearset::blue, AbstractMotor::encoderUnits::degrees);


Controller controller;

std::shared_ptr<OdomChassisController> drive =
  ChassisControllerBuilder()
  .withMotors({DriveLeftBack, DriveLeftFront}, {DriveRightFront, DriveRightBack})
  .withDimensions(AbstractMotor::gearset::blue, {{4_in, 15_in}, okapi::imev5GreenTPR})
  .withSensors(
    ADIEncoder{'G', 'F'},
    ADIEncoder{'E', 'D', true}
  )
  .withOdometry({{2.75_in, 7_in}, quadEncoderTPR})
  .buildOdometry();


  void updateDrive(){
      drive -> getModel() -> tank(controller.getAnalog(ControllerAnalog::leftY), controller.getAnalog(ControllerAnalog::rightY));
      if (controller.getDigital(ControllerDigital::left) == 1){
        DriveLeftFront.setBrakeMode(AbstractMotor::brakeMode::hold);
        DriveLeftBack.setBrakeMode(AbstractMotor::brakeMode::hold);

        DriveRightFront.setBrakeMode(AbstractMotor::brakeMode::hold);
        DriveRightBack.setBrakeMode(AbstractMotor::brakeMode::hold);
      }
      else if (controller.getDigital(ControllerDigital::right) == 1){
        DriveLeftBack.setBrakeMode(AbstractMotor::brakeMode::coast);
        DriveLeftFront.setBrakeMode(AbstractMotor::brakeMode::coast);


        DriveRightFront.setBrakeMode(AbstractMotor::brakeMode::coast);
        DriveRightBack.setBrakeMode(AbstractMotor::brakeMode::coast);
      }
    }
