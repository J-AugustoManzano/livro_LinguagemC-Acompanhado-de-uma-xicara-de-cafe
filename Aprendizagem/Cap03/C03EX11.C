// C03EX11.C

#include <stdio.h>

int main(void)
{

  char PAUSA;

  int MES;

  printf("Entre um numero equivalente a um MES: ");
  scanf("%d", &MES);
  while ((getchar() != '\n') && (!EOF));
  printf("\n");

  if (MES ==  1)
    printf("Janeiro");
  else
    if (MES ==  2)
      printf("Fevereiro");
    else
      if (MES ==  3)
        printf("Marco");
      else
        if (MES ==  4)
          printf("Abril");
        else
          if (MES ==  5)
            printf("Maio");
          else
            if (MES ==  6)
              printf("Junho");
            else
              if (MES ==  7)
                printf("Julho");
              else
                if (MES ==  8)
                  printf("Agosto");
                else
                  if (MES ==  9)
                    printf("Setembro");
                  else
                    if (MES == 10)
                      printf("Outubro");
                    else
                      if (MES == 11)
                        printf("Novembro");
                      else
                        if (MES == 12)
                          printf("Dezembro");
                        else
                          printf("Mes invalido");

  printf("\n");
  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
