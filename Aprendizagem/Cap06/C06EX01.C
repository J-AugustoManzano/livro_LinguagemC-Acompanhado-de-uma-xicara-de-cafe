// C06EX01.C

#define _USE_MATH_DEFINES // Exclusivo p/ VS

#include <stdio.h>
#include <math.h>

int main(void)
{

  char PAUSA;

  printf("%14.10f\n", acos(-1));           // =   3.1415926536
  printf("%14.10f\n", acos(0.5)*180/M_PI); // =  60.0000000000

  printf("%14.10f\n", asin(-1));           // =  -1.5707963268
  printf("%14.10f\n", asin(0.5)*180/M_PI); // =  30.0000000000

  printf("%14.10f\n", atan(0.5));          // =   0.4636476090
  printf("%14.10f\n", atan(1)*180/M_PI);   // =  45.0000000000

  printf("%14.10f\n", atan2(1,1));         // =   0.7853981634
  printf("%14.10f\n", atan2(-1,-1));       // =  -2.3561944902

  printf("%14.10f\n", cos(45*M_PI/180));   // =   0.7071067812
  printf("%14.10f\n", cos(atan(1)));       // =   0.7071067812

  printf("%14.10f\n", sin(M_PI/6));        // =   0.5000000000
  printf("%14.10f\n", sin(1));             // =   0.8414709848

  printf("%14.10f\n", tan(4));             // =   1.1578212823
  printf("%14.10f\n", tan(M_PI/4));        // =   1.0000000000

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
