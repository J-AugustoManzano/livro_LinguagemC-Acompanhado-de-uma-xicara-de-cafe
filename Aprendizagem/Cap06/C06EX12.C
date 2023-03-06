// C06EX12.C

#include <stdio.h>
#include <time.h>

int main(void)
{

  char PAUSA;

  time_t TEMPO = time(NULL);
  struct tm MOMENTO;

  MOMENTO = *localtime(&TEMPO);

  printf("%s", asctime(&MOMENTO));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
