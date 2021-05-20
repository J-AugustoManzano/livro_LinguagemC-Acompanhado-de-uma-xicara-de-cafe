// C05EXFBC.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int A = 1;
  int B = 2;
  int *P1 = 0, *P2 = 0;

  P1 = &A;
  P2 = &B;
  printf("[P1] ----> endereco: %x com conteudo = %d\n", &P1, *P1);
  printf("[P2] ----> endereco: %x com conteudo = %d\n", &P2, *P2);

  printf("\n");
  printf("Informe o um valor inteiro: ");
  scanf("%d", &A);
  while ((getchar() != '\n') && (!EOF));

  P2 = P1;

  printf("\n");
  printf("[A] -----> conteudo: %d\n", A);
  printf("[P1] ----> endereco: %x com conteudo = %d\n", &P1, *P1);
  printf("[P2] ----> endereco: %x com conteudo = %d\n", &P2, *P2);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
