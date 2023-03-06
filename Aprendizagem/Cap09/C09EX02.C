// C09EX02.C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  // Definicao de variaveis e configuracao do ambiente

  struct CAD_ALUNO
    {
      char  NOME[41];
      float NOTA[4];
      float MEDIA;
    };

  struct CAD_ALUNO ALUNO[8], X;

  int I, J, K;
  float Y, SOMA_NT, SOMA_MD, MEDIA_GP, NOTA[8][4], MEDIA[8];
  char NOME[8][41], ENTRANOTA[6];

  // Rotina para a entrada dos nomes e notas

  printf("Cadastro de alunos\n\n");
  for (I = 0; I <= 7; I++)
    {
      printf("Informe o %io. nome: ", I + 1);
      scanf("%[^\n]", &ALUNO[I].NOME);
      while ((getchar() != '\n') && (!EOF));
      printf("\n");
      printf("Entre as notas:\n\n");
      for (J = 0; J <= 3; J++)
        {
           printf("%ia. nota: ", J + 1);
           scanf("%[^\n]", &ENTRANOTA);
           while ((getchar() != '\n') && (!EOF));
           ALUNO[I].NOTA[J] = atof(ENTRANOTA);
        }
      printf("\n");
    }

  // Processamento do calculo das medias

  SOMA_MD = 0;
  for (I = 0; I <= 7; I++)
    {
      SOMA_NT = 0;
      for (J = 0; J <= 3; J++)
        SOMA_NT = SOMA_NT + ALUNO[I].NOTA[J];
      ALUNO[I].MEDIA = SOMA_NT / 4;
      SOMA_MD = SOMA_MD + ALUNO[I].MEDIA;
    }
  MEDIA_GP = SOMA_MD / 8;

  // Classificacao dos dados

  for (I = 0; I <= 6; I++)
    for (J = I + 1; J <= 7; J++)
      if (strcmp(ALUNO[I].NOME, ALUNO[J].NOME) > 0)
        {
          X = ALUNO[I];
          ALUNO[I] = ALUNO[J];
          ALUNO[J] = X;
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
      printf("%-41s", ALUNO[I].NOME);
      for (J = 0; J <= 3; J++)
        printf("%7.2f", ALUNO[I].NOTA[J]);
      printf("%7.2f", ALUNO[I].MEDIA);
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
