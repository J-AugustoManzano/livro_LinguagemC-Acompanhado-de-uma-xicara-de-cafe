// C05EXFBB.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float A;
  float *PA1 = 0, **PA2 = 0;

  printf("Informe o um valor inteiro: ");
  scanf("%f", &A);
  while ((getchar() != '\n') && (!EOF));

  PA1 = &A;
  PA2 = &PA1;

  printf("\n");
  printf("[A] -----> conteudo: %f ocupa %d bytes de memoria\n\n", A, sizeof(A));
  printf("[A] -----> endereco: %x\n", &A);
  printf("[PA1] ---> endereco: %x\n", &PA1);
  printf("[PA2] ---> endereco: %x\n", &PA2);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
