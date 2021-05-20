// C03EXFXE.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A[18], B[18], PESQ, NUMERO;
  int I, ACHA;
  char RESP;

  printf("Classificacao de elementos numericos\n\n");

  for (I = 0; I <= 17; I ++)
    {
      printf("Informe o %2do. valor da matriz A: ", I + 1);
      scanf("%d", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  for (I = 0; I <= 17; I ++)
    B[I] = A[I] + 2;

  RESP = 'S';
  while (RESP == 'S' || RESP == 's')
    {
      printf("\nEntre o numero a ser pesquisado: ");
      scanf("%d", &PESQ);
      while ((getchar() != '\n') && (!EOF));
      I = 0;
      ACHA = 0;
      while (I <= 17 && ACHA == 0)
        if (PESQ == B[I])
          ACHA = 1;
        else
          I ++;
      if (ACHA == 1)
        printf("%d foi localizado na posicao %d",PESQ, I+1);
      else
        printf("%d nao foi localizado", PESQ);
      printf("\n\nContinua? [S]IM/[N]AO + <Enter>: ");
      RESP = getchar();
    }
  while ((getchar() != '\n') && (!EOF));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
