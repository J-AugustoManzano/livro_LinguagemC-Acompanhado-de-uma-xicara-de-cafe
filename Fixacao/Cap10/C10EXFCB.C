// C10EXFCB.C

#include <stdio.h>

void potencia(int BASE, int EXPOENTE, int *POTENC)
{
  int I;
  *POTENC = 1;
  for(I = 1; I <= EXPOENTE; I++)
    *POTENC *= BASE;
}

int main(void)
{

  char PAUSA;

  int BASE, EXPOENTE, POT;
  printf("Calculo de Potencia\n\n");

  printf("Entre com a base .......: ");
  scanf("%d", &BASE);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre com o expoente ...: ");
  scanf("%d", &EXPOENTE);
  while ((getchar() != '\n') && (!EOF));

  potencia(BASE, EXPOENTE, &POT);

  printf("\nResultado = %d\n", POT);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
