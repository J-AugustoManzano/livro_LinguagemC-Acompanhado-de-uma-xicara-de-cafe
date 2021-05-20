// C02EXFBG.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  unsigned char CARAC_E;
  unsigned int CARAC_S;

  printf("Informe um caractere alfanumérico qualquer: ");
  scanf("%c", &CARAC_E);
  while ((getchar() != '\n') && (!EOF));

  CARAC_S = CARAC_E;

  printf("\n");
  printf("Equivale ao valor ASCII: %d\n", CARAC_S);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
