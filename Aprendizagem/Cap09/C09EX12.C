// C09EX12.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

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

  printf("Teste de acesso a lista enumerada simulada\n\n");
  printf("Entre um mes valido (1 ate 12): ");
  scanf("%i", &MES);
  while ((getchar() != '\n') && (!EOF));
  printf("\n");
  printf("Mes definido = %i", MES);
  printf(" em extenso equivale a %s", EXTENSO[MES-1]);
  printf("\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
