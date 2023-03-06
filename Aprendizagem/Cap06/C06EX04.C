// C06EX04.C

#include <stdio.h>
#include <math.h>

int main(void)
{

  char PAUSA;

  int    Y, B = 3;
  double X, R, A = 0.6625, F, I, EXP = 2.7182818284;

  printf("%14.10f\n", ceil(2.03));      // =   3.0000000000
  printf("%14.10f\n", ceil(-2.03));     // =  -2.0000000000

  printf("%14.10f\n", fabs(-8.238765)); // =   8.2387650000
  printf("%14.10f\n", fabs(-2.03));     // =   2.0300000000

  printf("%14.10f\n", floor(2.03));     // =   2.0000000000
  printf("%14.10f\n", floor(-2.03));    // =  -3.0000000000

  printf("%14.10f\n", fmod(5.3,2));     // =   1.3000000000
  printf("%14.10f\n", fmod(10.0,3.0));  // =   1.0000000000

  X = frexp(5.3, &Y);

  printf("\n");
  printf("X = %14.10f\n", X);           // =   0.6625000000
  printf("Y = %14.10f\n", Y);           // =   3

  R = ldexp(A, B);

  printf("R = %14.10f\n", R);           // =   5.3000000000

  F = modf(EXP, &I);

  printf("I = %14.10f\n", I);           // =   2.0000000000
  printf("F = %14.10f\n", F);           // =   0.7182818284

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
