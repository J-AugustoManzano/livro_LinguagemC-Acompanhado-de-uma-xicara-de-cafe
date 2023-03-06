// C09EX04.C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

  char PAUSA;

  // Definicao de variaveis e configuracao do ambiente

  struct ESCOLAR
    {
      char SALA[3];
      char SERIE[3];
    };

  struct CAD_ALUNO
    {
      char  NOME[41];
      float NOTA[4];
      float MEDIA;
      struct ESCOLAR DADO;
    };

  int I, J, TAMANHO;
  float SOMA_NT, SOMA_MD, MEDIA_GP;
  char ENTRANOTA[6], QUANT[15];
  struct CAD_ALUNO *PALUNO, *PI, *PJ, X;

  // Rotina para a entrada dos nomes e notas

  printf("Cadastro de alunos\n\n");
  printf("Entre a quantidade de elementos: ");
  scanf("%[^\n]", &QUANT);
  while ((getchar() != '\n') && (!EOF));
  TAMANHO = atoi(QUANT);
  PALUNO = (struct CAD_ALUNO *) malloc(TAMANHO * sizeof(struct
  CAD_ALUNO));

  // Rotina para a entrada dos nomes e notas

  PI = PALUNO;
  printf("\n");
  for (I = 0; I <= TAMANHO - 1; I++)
    {
      printf("Informe o %io. nome ....: ", I + 1);
      scanf("%[^\n]", &PI->NOME);
      while ((getchar() != '\n') && (!EOF));
      printf("\nInforme a serie ......: ");
      scanf("%[^\n]", &PI->DADO.SERIE);
      while ((getchar() != '\n') && (!EOF));
      printf("Informe a sala .......: ");
      scanf("%[^\n]", &PI->DADO.SALA);
      while ((getchar() != '\n') && (!EOF));
      printf("\n");
      printf("Entre as notas:\n");
      for (J = 0; J <= 3; J++)
        {
           printf("%ia. nota: ", J + 1);
           scanf("%[^\n]", &ENTRANOTA);
           while ((getchar() != '\n') && (!EOF));
           PI->NOTA[J] = atof(ENTRANOTA);
        }
      printf("\n");
     PI++;
    }

  // Processamento do calculo das medias

  PI = PALUNO;
  SOMA_MD = 0;
    for (I = 0; I <= TAMANHO - 1; I++)
    {
      SOMA_NT = 0;
      for (J = 0; J <= 3; J++)
        SOMA_NT = SOMA_NT + PI->NOTA[J];
      PI->MEDIA = SOMA_NT / 4;
      SOMA_MD = SOMA_MD + PI->MEDIA;
      PI++;
    }
  MEDIA_GP = SOMA_MD / TAMANHO;

  // Classificacao dos dados

  PI = PALUNO;
  for (I = 0; I < TAMANHO - 1; I++)
    {
      PJ = PI;
      PJ++;
      for (J = I + 1; J < TAMANHO; J++)
        {
          if (strcmp(PI->NOME, PJ->NOME) > 0)
            {
              X = *PI;
              *PI = *PJ;
              *PJ = X;
            }
          PJ++;
        }
      PI++;
    }

  // Apresentacao da tabela nome/notas/media

  printf("\n");
  printf("Relatorio Geral\n");
  printf("\n");
  printf("Aluno");
  printf("%29s", "Sala");
  printf("%7s", "Serie");
  printf("%7s", "Nota1");
  printf("%7s", "Nota2");
  printf("%7s", "Nota3");
  printf("%7s", "Nota4");
  printf("%7s", "Media");
  printf("\n");
  printf("\n");
  PI = PALUNO;
  for (I = 0; I <= TAMANHO - 1; I++)
    {
      printf("%-27s", PI->NOME);
      printf("%7s", PI->DADO.SALA);
      printf("%7s", PI->DADO.SERIE);
      for (J = 0; J <= 3; J++)
        printf("%7.2f", PI->NOTA[J]);
      printf("%7.2f", PI->MEDIA);
      printf("\n");
      PI++;
    }
  printf("\n");
  printf("%70s%6.2f", "Media Geral = ", MEDIA_GP);
  printf("\n");
  free(PALUNO);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
