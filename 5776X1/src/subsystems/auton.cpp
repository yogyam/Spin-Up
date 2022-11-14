#include "main.h"
#include <cmath>
// float DisToEncV;
// float DistoEncH;




void startAtRedTwo() {
  // start facing the center of the field, right block
  drive -> turnToAngle(-90_deg);
  
  drive -> driveToPoint({2_ft, 0_ft});
  drive -> turnToAngle(90_deg);
  /*
    Code to flip the roller goes here.
  */
  drive -> turnToAngle(90_deg);
  /*
    Code to catapult goes here
  */

}
//if start in front of roller

// void autoAim() {
//   float DisToEncV = 0;
//   float DistoEncH = 0;
//
// }
