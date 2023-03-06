// C04EX08.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int N, I = 1;
  long int FAT = 1;

  printf("Programa Fatorial\n\n");
  printf("Fatorial de que valor: ");
  scanf("%d", &N);
  while ((getchar() != '\n') && (!EOF));
  printf("\n");

  do
    {
       FAT *= I;
       I++;
    }
  while (I <= N);

  printf("\nFatorial de %-d = %-d.\n", N, FAT);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
