// C06EX11.C

#include <stdio.h>
#include <time.h>

int main(void)
{

  char PAUSA;

  struct tm MOMENTO;
  char SAIDA[80];

  printf("Entre o Dia de uma data ..: ");
  scanf("%d", &MOMENTO.tm_mday);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o Mes de uma data ..: ");
  scanf("%d", &MOMENTO.tm_mon);
  while ((getchar() != '\n') && (!EOF));
  MOMENTO.tm_mon--;

  printf("Entre o Ano de uma data ..: ");
  scanf("%d", &MOMENTO.tm_year);
  while ((getchar() != '\n') && (!EOF));
  MOMENTO.tm_year -= 1900;

  printf("\n");
  printf("Entre a Hora .............: ");
  scanf("%d", &MOMENTO.tm_hour);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre a Minuto ...........: ");
  scanf("%d", &MOMENTO.tm_min);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre a Segundo ..........: ");
  scanf("%d", &MOMENTO.tm_sec);
  while ((getchar() != '\n') && (!EOF));

  strftime(SAIDA, sizeof(SAIDA), "\n%d/%m/%Y | %H:%M:%S", &MOMENTO);
  printf("%s\n", SAIDA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
