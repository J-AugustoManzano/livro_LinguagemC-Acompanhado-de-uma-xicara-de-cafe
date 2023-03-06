// C09EX10.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  // Definicao da estrutura de enumeracao

  enum MESES
    {
      janeiro = 1,
      fevereiro,
      marco,
      abril,
      maio,
      junho,
      julho,
      agosto,
      setembro,
      outubro,
      novembro,
      dezembro
    };

  enum MESES MES;

  printf("Teste de acesso a lista enumerada\n\n");
  MES = janeiro;
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
