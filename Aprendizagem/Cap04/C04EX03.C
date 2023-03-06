// C04EX03.C

#include <stdio.h>
#include <ctype.h>

int main(void)
{

  char PAUSA;

  int N, I, R;
  char RESP = 'S';

  while (toupper(RESP) == 'S')
    {

      printf("Entre o valor da tabuada: ");
      scanf("%i", &N);
      while ((getchar() != '\n') && (!EOF));
      printf("\n");

      I = 1;
      while (I <= 10)
        {
          R = N * I;
          printf("%2i X %2i = %3i\n", N, I, R);
          I++;
        }
      printf("\n");
      printf("Deseja continuar?\n");
      printf("Tecle [S] para SIM / qualquer tecla para NAO: ");
      scanf("%c", &RESP);
      while ((getchar() != '\n') && (!EOF));
      printf("\n");
    }

  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
