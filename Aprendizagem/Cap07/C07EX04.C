// C07EX04.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float NOTA[10][4];
  int I, J;

  printf("Exemplo de checagem de indice\n\n");

  // Entrada das notas

  for (I = 0; I <= 9; I++)
    {
      printf("\nInforme as notas do %io. aluno:\n\n", I + 1);
      for (J = 0; J <= 3; J++)
        {
          printf("Nota: %i = ", J + 1);
          scanf("%f", &NOTA[I][J]);
          while ((getchar() != '\n') && (!EOF));
        }
    }
  printf("\n");

  // Apresentacao das notas

  for (I = 0; I <= 9; I++)
    {
      printf("\n\nAs notas do %io. aluno sao:\n", I + 1);
      for (J = 0; J <= 3; J++)
        printf("\nNota: %i = %5.2f", J + 1, NOTA[I][J]);
    }
  printf("\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
