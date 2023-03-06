// C06EX06.C

#include <stdio.h>
#include <math.h>

int main(void)
{

  char PAUSA;

  printf("%14.10f\n", exp(3.4));       // =  29.9641000474
  printf("%14.10f\n", exp(1));         // =   2.7182818285

  printf("%14.10f\n", log(exp(10)));   // =  10.0000000000
  printf("%14.10f\n", log(2.0));       // =   0.6931471806

  printf("%14.10f\n", log10(3));       // =   0.4771212547
  printf("%14.10f\n", log10(exp(10))); // =   4.3429448190

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
