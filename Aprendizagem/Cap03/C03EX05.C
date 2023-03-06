// C03EX05.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int CODIGO;
  printf("Entre o codigo de acesso (1, 2 ou 3): ");
  scanf("%d", &CODIGO);
  while ((getchar() != '\n') && (!EOF));

  if (CODIGO == 1 || CODIGO == 2 || CODIGO == 3)
    {
      if (CODIGO == 1)
        printf("Foi acionado o codigo: um.\n");
      if (CODIGO == 2)
        printf("Foi acionado o codigo: dois.\n");
      if (CODIGO == 3)
        printf("Foi acionado o codigo: tres.\n");
    }
  else
    printf("Codigo invalido.\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
