// C05EXFBD.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

 // char PALAVRA[] = "Paralelepipedo";
  char NOME[21];
  char *P = 0;

  printf("Informe um nome: ");
  scanf("%[^\n]", &NOME);
  while ((getchar() != '\n') && (!EOF));


  P = NOME;

  printf("\n");
  while (*P != '\0')
  {
    printf("%c ", *P);
    *P++;
  }

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}

