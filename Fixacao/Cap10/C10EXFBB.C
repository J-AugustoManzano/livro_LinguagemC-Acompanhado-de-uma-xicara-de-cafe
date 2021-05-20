// C10EXFBB.C

#include <stdio.h>

void potencia(int BASE, int EXPOENTE)
{
  int P, I;
  P = 1;
  for(I = 1; I <= EXPOENTE; I++)
    P *= BASE;
  printf("\nResultado = %d\n", P);
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

  potencia(BASE, EXPOENTE);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
