#include "main.h"
#include <cmath>
float DisToEncV;
float DistoEncH;




void startPosRoller() {
  drive -> turnToAngle(180_deg);
  drive -> driveToPoint({1_ft, 1_ft});
}
//if start in front of roller

void autoAim() {
  float DisToEncV = 0;
  float DistoEncH = 0;
  
}
