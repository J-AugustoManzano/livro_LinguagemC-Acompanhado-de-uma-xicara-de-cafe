// C06EX09.C

#include <stdio.h>
#include <time.h>

int main(void)
{

  char PAUSA;

  time_t TEMPO;
  struct tm MOMENTO;

  time(&TEMPO);
  MOMENTO = *localtime(&TEMPO);

  printf("Dia .......: %02d\n", MOMENTO.tm_mday);
  printf("Mes .......: %02d\n", MOMENTO.tm_mon + 1);
  printf("Ano .......: %04d\n", MOMENTO.tm_year + 1900);
  printf("\n");
  printf("Hora ......: %02d\n", MOMENTO.tm_hour);
  printf("Minuto ....: %02d\n", MOMENTO.tm_min);
  printf("Segundo ...: %02d\n", MOMENTO.tm_sec);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
