// C07EX01.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  float MD[8], SOMA = 0, MEDIA;
  int I;

  printf("Calculo de media escolar\n\n");
  for (I = 0; I <= 7; I++)
    {
      printf("Informe a %ia. media: ", I + 1);
      scanf("%f", &MD[I]);
      while ((getchar() != '\n') && (!EOF));
      SOMA += MD[I];
    }

  MEDIA = SOMA / 8;

  printf("\nA media do grupo equivale a: %.2f\n", MEDIA);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
