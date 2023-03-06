// C06EX13.C

#include <stdio.h>
#include <time.h>

int main(void)
{

  char PAUSA;

  clock_t INICIO_CRONO, FIM_CRONO;
  int I = 1, TIMER = 5;

  do
  {

    INICIO_CRONO = clock();

    printf("Mensagem no segundo: %d\n", I);

    do
    {
      FIM_CRONO = clock();
    }
    while (((FIM_CRONO - INICIO_CRONO) / CLOCKS_PER_SEC) < 1);

    I++;

  }
  while (I <= TIMER);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
