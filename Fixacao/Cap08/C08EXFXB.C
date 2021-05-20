// C03EXFXB.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A[8], B[8], I, J, X, ACHA, PESQ;
  char RESP;

  printf("Classificacao de elementos numericos\n\n");

  for (I = 0; I <= 7; I ++)
    {
      printf("Informe o %do. valor da matriz A: ", I + 1);
      scanf("%d", &A[I]);
      while ((getchar() != '\n') && (!EOF));
    }

  for (I = 0; I <= 7; I ++)
    B[I] = A[I] * 5;

  for (I = 0; I <= 6; I ++)
    for (J = I + 1; J <= 7; J ++)
      if (B[I] > B[J])
        {
          X = B[I];
          B[I] = B[J];
          B[J] = X;
        }

  printf("\n\n");
  for (I = 0; I <= 7; I ++)
    printf("O %do. valor da matriz B e': %3d\n", I + 1, B[I]);

  RESP = 'S';
  while (RESP == 'S' || RESP == 's')
    {
      printf("\nEntre o numero a ser pesquisado: ");
      scanf("%d", &PESQ);
      while ((getchar() != '\n') && (!EOF));
      I = 0;
      ACHA = 0;
      while (I <= 7 && ACHA == 0)
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
