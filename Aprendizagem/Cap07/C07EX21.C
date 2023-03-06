// C07EX21.C

#include <stdio.h>
#include <ctype.h>

void uplowcase(char *PMATRIZ, int TIPO)
{
  if (TIPO == 1)
    while (*PMATRIZ != '\0')
      putchar(toupper(*PMATRIZ++));
  else
    while (*PMATRIZ != '\0')
      putchar(tolower(*PMATRIZ++));
  return;
}

int main(void)
{

  char PAUSA;

  char MENSAGEM[50];

  printf("Entre uma mensagem: ");
  scanf("%[^\n]", &MENSAGEM);
  while ((getchar() != '\n') && (!EOF));

  printf("\n");

  uplowcase(MENSAGEM, 1); // Apresenta maiusculo
  printf("\n");
  uplowcase(MENSAGEM, 2); // Apresenta minusculo
  printf("\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
