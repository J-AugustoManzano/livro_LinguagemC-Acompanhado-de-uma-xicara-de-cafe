// C10EXFDB.C

#include <stdio.h>

int potencia(int BASE, int EXPOENTE)
{
  int I, POTENC = 1;
  for(I = 1; I <= EXPOENTE; I++)
    POTENC *= BASE;
  return POTENC;
}

int main(void)
{

  char PAUSA;

  int BASE, EXPOENTE;
  printf("Calculo de Potencia\n\n");

  printf("Entre com a base .......: ");
  scanf("%d", &BASE);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre com o expoente ...: ");
  scanf("%d", &EXPOENTE);
  while ((getchar() != '\n') && (!EOF));

  printf("\nResultado = %d\n", potencia(BASE, EXPOENTE));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
