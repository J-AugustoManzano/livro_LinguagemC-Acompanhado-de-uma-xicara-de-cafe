// C03EXFBF.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float N1, N2, N3, N4, MD;

  printf("Informe o 1a. nota: ");
  scanf("%f", &N1);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o 2a. nota: ");
  scanf("%f", &N2);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o 3a. nota: ");
  scanf("%f", &N3);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o 4a. nota: ");
  scanf("%f", &N4);
  while ((getchar() != '\n') && (!EOF));

  MD = (N1 + N2 + N3 + N4) / 4;

  if (MD >= 5.0)
    printf("\nAprovado com media = ");
  else
    printf("\nReprovado com media = ");
  printf("%5.2f\n", MD);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
