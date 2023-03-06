// C05EX06.C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  char *P1 = getenv("X");
  char *P2;

  if (P1)
    printf("Valor de X: %s\n", P1);
  else
    printf("X nulo\n");

  putenv(strdup("Y=90"));

  P2 = getenv("Y");

  if (P2)
    printf("Valor de Y: %s\n", P2);
  else
    printf("Y nulo\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  free(strdup("Y=90"));

  return 0;
}
