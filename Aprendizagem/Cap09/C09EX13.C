// C09EX13.C

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

  // Definicao da matriz (vetor) de caracteres

  char EXTENSO[][10] =
    {
      "janeiro",
      "fevereiro",
      "marco",
      "abril",
      "maio",
      "junho",
      "julho",
      "agosto",
      "setembro",
      "outubro",
      "novembro",
      "dezembro"
    };

  int MES;

  printf("Teste de acesso a lista enumerada com matriz\n\n");
  MES = janeiro;
  printf("Mes definido = %i", MES);
  printf(" em extenso equivale a %s", EXTENSO[MES-1]);
  printf("\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
