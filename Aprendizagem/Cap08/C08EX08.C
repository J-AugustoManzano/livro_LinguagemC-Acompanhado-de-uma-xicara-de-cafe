// C08EX08.C

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{

  int NUMERO[5], I, PESQ;
  bool ACHA;
  char RESP;

  printf("Pesquisa sequencial de numeros\n\n");

  // Entrada de dados numericos

  for (I = 0; I <= 4; I++)
    {
      printf("Informe o %do. numero: ", I + 1);
      scanf("%d", &NUMERO[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  /* Processamento da pesquisa enquanto RESP = S */

  RESP = 'S';
  while (toupper(RESP) == 'S')
    {
      printf("\nEntre o numero a ser pesquisado: ");
      scanf("%d", &PESQ);
      while ((getchar() != '\n') && (!EOF));
      I = 0;
      ACHA = false;
      while (I <= 4 && ACHA == false)
        if (PESQ == NUMERO[I])
          ACHA = true;
        else
          I++;
      if (ACHA == true)
        printf("%d foi localizado na posicao %d", PESQ, I + 1);
      else
        printf("%d nao foi localizado", PESQ);
      printf("\n\nContinua? [S]IM/[N]AO: ");
      RESP = getchar();
      while ((getchar() != '\n') && (!EOF));
    }

  return 0;
}
