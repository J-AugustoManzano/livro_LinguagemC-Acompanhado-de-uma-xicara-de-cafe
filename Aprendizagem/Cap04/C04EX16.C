// C04EX16.C

#include <stdio.h>
#include <ctype.h>

int main(void)
{

  int N, X, I;
  char R;
  I = 1;
  laco:
    printf("Entre valor %2d -> ", I);
    scanf("%i", &N);
    while ((getchar() != '\n') && (!EOF));
    X = N * 3;
    printf("Resultado = %3d\n\n", X);
    printf("Deseja continuar? (S) p/ Sim, qualquer letra p/ Nao: ");
    scanf("%c", &R);
    while ((getchar() != '\n') && (!EOF));
    printf("\n");
    if (toupper(R) != 'S') goto fimlaco;
    I++;
    goto laco;
  fimlaco:

  return 0;
}
