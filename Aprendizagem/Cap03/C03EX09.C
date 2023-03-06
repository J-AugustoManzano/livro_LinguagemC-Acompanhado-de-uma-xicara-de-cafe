// C03EX09.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float A, B, R;
  int OPCAO;

  printf("Entre o valor <A>: ");
  scanf("%f", &A);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o valor <B>: ");
  scanf("%f", &B);
  while ((getchar() != '\n') && (!EOF));

  printf("\n");
  printf("[1] - Adicao\n");
  printf("[2] - Subtracao\n");
  printf("[3] - Multiplicacao\n");
  printf("[4] - Divisao\n");
  printf("\n");
  printf("Escolha uma opcao: ");
  scanf("%i", &OPCAO);
  while ((getchar() != '\n') && (!EOF));

  if (OPCAO == 1)
    R = A + B;
  if (OPCAO == 2)
    R = A - B;
  if (OPCAO == 3)
    R = A * B;
  if (OPCAO == 4)
    if (B == 0)
      R = 0;
    else
      R = A / B;
  if (OPCAO >= 1 && OPCAO <= 4)
    printf("\nO resultado da operacao equivale a: %-8.2f\n", R);
  else
    printf("\nOpcao invalida.\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
