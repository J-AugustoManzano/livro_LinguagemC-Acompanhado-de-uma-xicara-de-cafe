// C03EXFBD.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float N, R;

  printf("Informe um valor qualquer: ");
  scanf("%10f", &N);
  while ((getchar() != '\n') && (!EOF));

  R = N * 2.5;

  if (R >= 25.99)
    printf("\nResultado = %6.2f\n", R);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
