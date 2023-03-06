// C09EX01.C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  // Definicao de variaveis e configuracao do ambiente

  int I, J, K;
  float Y, SOMA_NT, SOMA_MD, MEDIA_GP, NOTA[8][4], MEDIA[8];
  char NOME[8][41], X[41], ENTRANOTA[6];

  // Rotina para a entrada dos nomes e notas

  printf("Cadastro de alunos\n\n");
  for (I = 0; I <= 7; I++)
    {
      printf("Informe o %io. nome: ", I + 1);
      scanf("%[^\n]", &NOME[I]);
      while ((getchar() != '\n') && (!EOF));
      printf("\n");
      printf("Entre as notas:\n\n");
      for (J = 0; J <= 3; J++)
        {
           printf("%ia. nota: ", J + 1);
           scanf("%[^\n]", &ENTRANOTA);
           while ((getchar() != '\n') && (!EOF));
           NOTA[I][J] = atof(ENTRANOTA);
        }
      printf("\n");
    }

  // Processamento do calculo das medias

  SOMA_MD = 0;
  for (I = 0; I <= 7; I++)
    {
      SOMA_NT = 0;
      for (J = 0; J <= 3; J++)
        SOMA_NT = SOMA_NT + NOTA[I][J];
      MEDIA[I] = SOMA_NT / 4;
      SOMA_MD = SOMA_MD + MEDIA[I];
    }
  MEDIA_GP = SOMA_MD / 8;

  // Classificacao dos dados

  for (I = 0; I <= 6; I++)
    for (J = I + 1; J <= 7; J++)
      if (strcmp(NOME[I], NOME[J]) > 0)
        {

          // Troca os nomes

          strcpy(X, NOME[I]);
          strcpy(NOME[I], NOME[J]);
          strcpy(NOME[J], X);

          // Troca as notas bimestrais

          for (K = 0; K <= 3; K++)
            {
              Y = NOTA[I][K];
              NOTA[I][K] = NOTA[J][K];
              NOTA[J][K] = Y;
            }

          // Troca as medias

          Y = MEDIA[I];
          MEDIA[I] = MEDIA[J];
          MEDIA[J] = Y;
        }

  // Apresentacao da tabela nome/notas/media

  printf("\n");
  printf("Relatorio Geral\n");
  printf("\n");
  printf("Aluno");
  printf("%43s", "Nota1");
  printf("%7s", "Nota2");
  printf("%7s", "Nota3");
  printf("%7s", "Nota4");
  printf("%7s", "Media");
  printf("\n");
  printf("\n");
  for (I = 0; I <= 7; I++)
    {
      printf("%-41s", NOME[I]);
      for (J = 0; J <= 3; J++)
        printf("%7.2f", NOTA[I][J]);
      printf("%7.2f", MEDIA[I]);
      printf("\n");
    }
  printf("\n");
  printf("%70s%6.2f", "Media Geral = ", MEDIA_GP);
  printf("\n");

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
