// C06EX15.C

#include <stdio.h>
#include <time.h>

int main(void)
{

  char PAUSA;

  struct tm ENTRADA, MOMENTO;
  time_t TEMPO, ATUAL;
  char SAIDA[80];

  ATUAL = time(NULL);
  MOMENTO = *localtime(&ATUAL);

  printf("Entre o Dia de uma data ..: ");
  scanf("%d", &ENTRADA.tm_mday);
  while ((getchar() != '\n') && (!EOF));

  printf("Entre o Mes de uma data ..: ");
  scanf("%d", &ENTRADA.tm_mon);
  while ((getchar() != '\n') && (!EOF));
  ENTRADA.tm_mon--;

  printf("Entre o Ano de uma data ..: ");
  scanf("%d", &ENTRADA.tm_year);
  while ((getchar() != '\n') && (!EOF));
  ENTRADA.tm_year -= 1900;

  ENTRADA.tm_sec = 0;
  ENTRADA.tm_min = 0;
  ENTRADA.tm_hour = 0;
  ENTRADA.tm_isdst = -1;

  MOMENTO.tm_sec = 0;
  MOMENTO.tm_min = 0;
  MOMENTO.tm_hour = 0;

  if (mktime(&ENTRADA) == -1)
  {
    printf("\nErro na entrada da data.\n");
    return 0;
  }
  else
  {
    strftime(SAIDA, sizeof(SAIDA), "\n%d/%m/%Y", &ENTRADA);
    printf("%s - ", SAIDA);
    switch (ENTRADA.tm_wday)
    {
      case 0: printf("Domingo\n");       break;
      case 1: printf("Segunda-feira\n"); break;
      case 2: printf("Terca-feira\n");   break;
      case 3: printf("Quarta-Feira\n");  break;
      case 4: printf("Quinta-feira\n");  break;
      case 5: printf("Sexua-feira\n");   break;
      case 6: printf("Sabado\n");        break;
    }
  }

  TEMPO = mktime(&ENTRADA);
  ATUAL = mktime(&MOMENTO);

  if (TEMPO > ATUAL)
    printf("Data de vencimento: A VENCER.\n");
  else
    if (TEMPO == ATUAL)
      printf("Data de vencimento: VENCE HOJE.\n");
    else
      printf("Data de vencimento: VENCIDO.\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
