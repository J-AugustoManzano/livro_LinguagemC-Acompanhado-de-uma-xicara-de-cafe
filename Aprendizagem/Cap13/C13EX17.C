// C13EX17.C

#include <stdio.h>
#include "stdgen.h"

int main(void)
{

  FILE *PTRARQ;
  int I, A;
  size_t TAMANHO;

  PTRARQ = fopen("ARQBIN05.BIN", "wb+");

  do
    {
      printf("Informe um valor inteiro, [0] para sair: ");
      scanf("%i", &A);
      clrbufkey();
      if (A != 0)
        {
          A *= 2;
          fwrite(&A, sizeof(int), 1, PTRARQ);
          if (ferror(PTRARQ))
            {
              printf("\nErro na gravacao dos dados.");
              break;
            }
          clearerr(PTRARQ);
        }
    }
  while (A != 0);

  fseek(PTRARQ, 0, SEEK_END);
  TAMANHO = ftell(PTRARQ) / 4;
  fseek(PTRARQ, 0, SEEK_SET);

  printf("\n");
  for (I = 1; I <= TAMANHO; I++)
    {
      fread(&A, sizeof(int), 1, PTRARQ);
      printf("Valor = %4i\n", A);
    }

  fflush(stdout);
  fclose(PTRARQ);

  printf("\n");
  pause(NULL);

  return 0;
}
