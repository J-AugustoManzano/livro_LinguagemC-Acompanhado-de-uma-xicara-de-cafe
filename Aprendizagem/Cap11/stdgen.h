// stdgen.h 
// Arquivo de cabe�alho com funcionalidades genericas

#include <stdio.h>

void pause(const char *MENSAGEM)
{
  char PAUSA;
  if (MENSAGEM == NULL)
    printf("Tecle <Enter> para continuar... ");
  else
    printf(MENSAGEM);
  PAUSA = getchar();
}

void clrbufkey(void)
{
  while ((getchar() != '\n') && (!EOF));
}