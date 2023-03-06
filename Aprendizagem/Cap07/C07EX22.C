// C07EX22.C

#include <stdio.h>
#include <ctype.h>

void displaytext(char STRING[])
{
  int I;
  for(I = 0; STRING[I]; I++)
    putchar(STRING[I]);
  return;
}

int main(void)
{

  char PAUSA;

  char TEXTO[51];
  int POSICAO;

  printf("Entre o texto (com ate 50 caracteres): ");
  scanf("%[^\n]", &TEXTO);
  while ((getchar() != '\n') && (!EOF));

  char *PMATRIZ = TEXTO;

  printf("Entre a partir de qual posicao voce quer ver o texto: ");
  scanf("%i", &POSICAO);
  while ((getchar() != '\n') && (!EOF));
  printf("\n");

  displaytext(PMATRIZ + POSICAO - 1);
  printf("\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
