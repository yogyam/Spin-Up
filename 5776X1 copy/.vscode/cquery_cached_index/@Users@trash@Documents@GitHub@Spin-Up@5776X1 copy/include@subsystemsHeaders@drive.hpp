#include "main.h"


using namespace okapi;

extern Motor DriveRightFront;
extern Motor DriveRightBack;
extern Motor DriveLeftFront;
extern Motor DriveLeftBack;
extern Motor DriveLeftTop;
extern Motor DriveRightTop;
extern std::shared_ptr<OdomChassisController> drive;
extern Controller controller;

void updateDrive();
