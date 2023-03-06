// C06EX10.C

#include <stdio.h>
#include <time.h>

int main(void)
{

  char PAUSA;

  time_t TEMPO;
  struct tm MOMENTO;
  char SAIDA[80];

  TEMPO = time(NULL);
  MOMENTO = *localtime(&TEMPO);

  strftime(SAIDA, sizeof(SAIDA), "%d/%m/%Y | %H:%M:%S", &MOMENTO);
  printf("%s\n", SAIDA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
