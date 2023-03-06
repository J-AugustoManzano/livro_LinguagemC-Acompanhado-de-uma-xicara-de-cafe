// C04EX07.C

#include <stdio.h>
#include <ctype.h>

int main(void)
{

  char PAUSA;

  int N, I, R;
  char RESP;

  do
    {
      printf("Entre o valor da tabuada: ");
      scanf("%i", &N);
      while ((getchar() != '\n') && (!EOF));
      printf("\n");

      I = 1;
      do
        {
          R = N * I;
          printf("%2i X %2i = %3i\n", N, I, R);
          I++;
        }
      while (I <= 10);
      printf("\n");
      printf("Deseja continuar?\n");
      printf("Tecle [S] para SIM / qualquer tecla para NAO: ");
      scanf("%c", &RESP);
      while ((getchar() != '\n') && (!EOF));
      printf("\n");
    }
  while (toupper(RESP) == 'S');

  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
