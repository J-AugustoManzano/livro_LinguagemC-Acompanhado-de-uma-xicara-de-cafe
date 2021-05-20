// C03EXFBE.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  unsigned int V1, V2, V3, V4;

  printf("Informe o 1o. valor inteiro: ");
  scanf("%d", &V1);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o 2o. valor inteiro: ");
  scanf("%d", &V2);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o 3o. valor inteiro: ");
  scanf("%d", &V3);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o 4o. valor inteiro: ");
  scanf("%d", &V4);
  while ((getchar() != '\n') && (!EOF));

  if (V1 % 2 == 0 || V1 % 3 == 0)
    printf("\nV1 = %4d\n", V1);

  if (V2 % 2 == 0 || V2 % 3 == 0)
    printf("\nV2 = %4d\n", V2);

  if (V3 % 2 == 0 || V3 % 3 == 0)
    printf("\nV3 = %4d\n", V3);

  if (V4 % 2 == 0 || V4 % 3 == 0)
    printf("\nV4 = %4d\n", V4);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
