// C07EX10.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int I;
  char NOME[10][40];

  // Entrada dos nomes

  printf("Leitura e apresentacao de nomes\n\n");

  for (I = 0; I <= 9; I++)
    {
      printf("Informe o %2io. nome: ", I + 1);
      scanf("%[^\n]", &NOME[I]);
      while ((getchar() != '\n') && (!EOF));
    }
  printf("\n");

  // Apresentacao dos nomes

  for (I = 0; I <= 9; I++)
    printf("%2io. nome: %s\n", I + 1, NOME[I]);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
