// C06EX14.C

#include <stdio.h>
#include <time.h>

int main(void)
{

  char PAUSA;

  clock_t INICIO_CRONO, FIM_CRONO;
  time_t TMP_INICIAL, TMP_FINAL;
  int I = 1, TIMER;
  long TMP_X;
  double TMP_Y;

  printf("Quantos segundo a esperar? ");
  scanf("%i", &TIMER);
  while ((getchar() != '\n') && (!EOF));

  time(&TMP_INICIAL);
  INICIO_CRONO = clock();

  do
  {
    time(&TMP_FINAL);
    FIM_CRONO = clock();
  }
  while ((FIM_CRONO - INICIO_CRONO) / CLOCKS_PER_SEC < TIMER);

  TMP_X = (FIM_CRONO - INICIO_CRONO) / CLOCKS_PER_SEC;
  TMP_Y = difftime(TMP_FINAL, TMP_INICIAL);

  printf("Tempo em segundos: %ld - funcao clock()\n", TMP_X);
  printf("Tempo em segundos: %1.f - funcao difftime()\n", TMP_Y);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
