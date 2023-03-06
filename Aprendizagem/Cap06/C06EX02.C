// C06EX02.C

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>

int main(void)
{

  char PAUSA;

  printf("%14.10f\n", cosh(60*M_PI/180)); // =  1.6002868577
  printf("%14.10f\n", cosh(-1));          // =  1.5430806348

  printf("%14.10f\n", sinh(45*M_PI/180)); // =  0.8686709615
  printf("%14.10f\n", sinh(-1));          // = -1.1752011936

  printf("%14.10f\n", tanh(60*M_PI/180)); // =  0.7807144354
  printf("%14.10f\n", tanh(4));           // =  0.9993292997

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
