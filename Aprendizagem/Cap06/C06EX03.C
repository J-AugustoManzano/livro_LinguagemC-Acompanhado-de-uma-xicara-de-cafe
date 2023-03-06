// C06EX03.C

#include <stdio.h>
#include <math.h>

int main(void)
{

  char PAUSA;

  printf("%14.10f\n", pow(2.0,3.0));   // =   8.0000000000
  printf("%14.10f\n", pow(2.0,0.0));   // =   1.0000000000

  printf("%14.10f\n", sqrt(144));      // =  12.0000000000
  printf("%14.10f\n", sqrt(sqrt(16))); // =   2.0000000000

  printf("%14.10f\n", cbrt(27.0));     // =   3.0000000000

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
