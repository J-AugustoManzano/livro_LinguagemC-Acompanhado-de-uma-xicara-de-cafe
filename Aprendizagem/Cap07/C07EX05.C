// C07EX05.C

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

  printf("Aluno");
  printf("%10s", "Nota1");
  printf("%10s", "Nota2");
  printf("%10s", "Nota3");
  printf("%10s", "Nota4");
  printf("\n");
  printf("\n");
  for (I = 0; I <= 9; I++)
    {
      printf("%5i", I + 1);
      for (J = 0; J <= 3; J++)
        printf("%10.2f", NOTA[I][J]);
      printf("\n");
    }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
