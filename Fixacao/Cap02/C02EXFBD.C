// C02EXFBD.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  short TEMPO;
  float VELOCIDADE, DISTANCIA, LITROS_USADOS;

  printf("Informe o tempo da viagem (inteiro) ...: ");
  scanf("%d", &TEMPO);
  while ((getchar() != '\n') && (!EOF));
  printf("Informe a velocidade ..................: ");
  scanf("%f", &VELOCIDADE);
  while ((getchar() != '\n') && (!EOF));

  DISTANCIA = TEMPO * VELOCIDADE;
  LITROS_USADOS = DISTANCIA / 12;

  printf("\n");
  printf("Tempo .................................: %6d\n", TEMPO);
  printf("Velocidade ............................: %6.2f\n", VELOCIDADE);
  printf("Litros usado ..........................: %6.2f\n", DISTANCIA);
  printf("Distancia .............................: %6.2f\n", LITROS_USADOS);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
