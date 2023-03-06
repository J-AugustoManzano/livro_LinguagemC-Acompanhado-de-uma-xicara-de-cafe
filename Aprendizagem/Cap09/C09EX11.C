// C09EX11.C

#include <stdio.h>

// Definicao de constantes

#define janeiro   1
#define fevereiro 2
#define marco     3
#define abril     4
#define maio      5
#define junho     6
#define julho     7
#define agosto    8
#define setembro  9
#define outubro  10
#define novembro 11
#define dezembro 12

int main(void)
{

  char PAUSA;

  int MES;

  printf("Teste de acesso a lista enumerada simulada\n\n");

  printf("Entre um mes valido (1 ate 12): ");
  scanf("%i", &MES);
  while ((getchar() != '\n') && (!EOF));
  printf("\n");
  printf("Mes definido = %i", MES);
  printf(" em extenso equivale a ");
  switch(MES)
    {
      case janeiro   : printf("janeiro");   break;
      case fevereiro : printf("fevereiro"); break;
      case marco     : printf("marco");     break;
      case abril     : printf("abril");     break;
      case maio      : printf("maio");      break;
      case junho     : printf("junho");     break;
      case julho     : printf("julho");     break;
      case agosto    : printf("agosto");    break;
      case setembro  : printf("setembro");  break;
      case outubro   : printf("outubro");   break;
      case novembro  : printf("novembro");  break;
      case dezembro  : printf("dezembro");  break;
    }
  printf("\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
