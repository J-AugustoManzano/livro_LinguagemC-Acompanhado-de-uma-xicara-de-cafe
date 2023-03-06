// C03EX08.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float A, B, C;

  printf("Informe o lado A: "); scanf("%f", &A);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o lado B: "); scanf("%f", &B);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o lado C: "); scanf("%f", &C);
  while ((getchar() != '\n') && (!EOF));

  if (A<B+C && B<A+C && C<A+B)
    if (A==B && B==C)
      printf("\nTriangulo Equilatero\n");
    else
      if (A==B || A==C || C==B)
	  printf("\nTriangulo Isosceles\n");
      else
	  printf("\nTriangulo Escaleno\n");
  else
    printf("\nOs valores fornecidos nao formam um triangulo\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
