// C05EX14.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  char PALAVRA[] = "Paralelepipedo";
  char *P = 0;

  P = PALAVRA;

  while (*P != '\0')
  {
    printf("%c\n", *P);
    *P++;
  }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
