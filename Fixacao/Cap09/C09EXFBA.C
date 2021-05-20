// C09EXFBA.C

#include <stdio.h>
#include <string.h>

int main(void)
{

  struct CAD_AGENDA
    {
      char NOME[40];
      char ENDERECO[50];
      char TELEFONE[10];
    };

  struct CAD_AGENDA PESSOA[10], X;
  int OPCAO, I, J, ACHA;
  char RESP, PESQ[40];

  OPCAO = 0;
  while (OPCAO != 5)
    {
      printf("\n\n");
      printf("Agenda Eletronica\n");
      printf("\n");
      printf("[1] - Cadastro\n");
      printf("[2] - Classificacao\n");
      printf("[3] - Pesquisa\n");
      printf("[4] - Listagem\n");
      printf("[5] - Fim de programa\n");
      printf("\n");
      printf("Escolha um opcao: ");
      scanf("%d", &OPCAO);
      while ((getchar() != '\n') && (!EOF));
      if (OPCAO < 1 || OPCAO > 5)
        printf("\n\nOpcao invalida - tente novamente\n\n");
      if (OPCAO != 5)
        {
          if (OPCAO == 1)
            {
              for (I = 0; I <= 9; I ++)
                {
                  printf("\n");
                  printf("Entrada de Dados\n");
                  printf("\n");
                  printf("Digite o %2do. nome ....: ", I + 1);
                  scanf("%[^\n]", &PESSOA[I].NOME);
                  while ((getchar() != '\n') && (!EOF));
                  printf("Digite o endereco .....: ");
                  scanf("%[^\n]", &PESSOA[I].ENDERECO);
                  while ((getchar() != '\n') && (!EOF));
                  printf("Digite o telefone .....: ");
                  scanf("%[^\n]", &PESSOA[I].TELEFONE);
                  while ((getchar() != '\n') && (!EOF));
                }
            }
          if (OPCAO == 2)
            {
              printf("\n");
              printf("Classificacao de Dados\n");
              printf("\n");
              for (I = 0; I <= 8; I ++)
                for (J = I + 1; J <= 9; J ++)
                  if (strcmp(PESSOA[I].NOME, PESSOA[J].NOME) > 0)
                    {
                      X = PESSOA[I];
                      PESSOA[I] = PESSOA[J];
                      PESSOA[J] = X;
                   }
              printf("Dados Classificados\n");
            }
          if (OPCAO == 3)
            {
              printf("\n");
              printf("Pesquisa de Dados\n");
              printf("\n");
              RESP = 'S';
              while (RESP == 'S' || RESP == 's')
                {
                  printf("\nEntre o nome a ser pesquisado: ");
                  scanf("%[^\n]", &PESQ);
                  while ((getchar() != '\n') && (!EOF));
                  I = 0;
                  ACHA = 0;
                  while (I <= 9 && ACHA == 0)
                    if (strcmp(PESQ, PESSOA[I].NOME) == 0)
                      ACHA = 1;
                    else
                      I ++;
                  if (ACHA == 1)
                    {
                      printf("%s foi localizado na posicao %d\n",PESQ, I+1);
                      printf("\n");
                      printf("%s", PESSOA[I].NOME);
                      printf("%s", PESSOA[I].ENDERECO);
                      printf("%s", PESSOA[I].TELEFONE);
                      printf("\n");
                    }
                  else
                    printf("%s nao foi localizado", PESQ);
                  printf("\n\nContinua? [S]IM/[N]AO + <Enter>: ");
                  RESP = getchar();
                  while ((getchar() != '\n') && (!EOF));
                }
            }
          if (OPCAO == 4)
            {
              printf("\n");
              printf("Listagem de Dados\n");
              printf("\n");
              for (I = 0; I <= 9; I ++)
                {
                  printf("%s ", PESSOA[I].NOME);
                  printf("%s ", PESSOA[I].ENDERECO);
                  printf("%s ", PESSOA[I].TELEFONE);
                  printf("\n");
                }
            }
        }
    }
  return 0;
}
