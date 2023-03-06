// C10EX19.C

#include <stdio.h>
#include <ctype.h>

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}

char *maiusculo(char *PNOME)
{

  char *PCARACTERE, *PX;

  PCARACTERE = PX = PNOME;

  while (*PNOME)
    {
      *PX = toupper(*PNOME);
      PNOME++;
      PX++;
    }

  return PCARACTERE;

}

int main(void)
{

  char PAUSA;

  char NOME[40];

  printf("Informe seu nome: ");
  scanf("%[^\n]", &NOME); clrbufkey();
  printf("Ola, %s.\n", maiusculo(NOME));

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
