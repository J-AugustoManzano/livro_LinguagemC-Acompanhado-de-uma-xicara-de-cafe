// C09EX06.C

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  char PAUSA;

  // Definicao da estrutura de uniao

  union CAD_ALUNO
    {
      char  NOME[41];
      float NOTA1;
      float NOTA2;
      float NOTA3;
      float NOTA4;
    };
  union CAD_ALUNO ALUNO;

  char ENTRANOTA[6];

  // Entrada de dados individualizada e sua saida
  printf("Cadastro de aluno\n\n");

  printf("Informe o nome .....: ");
  scanf("%[^\n]", &ALUNO.NOME);
  while ((getchar() != '\n') && (!EOF));
  printf("Nome informado .....: %s\n", ALUNO.NOME);
  printf("\n");

  printf("Entre as notas:\n");

  printf("1a. nota ...........: ");
  scanf("%[^\n]", &ENTRANOTA);
  while ((getchar() != '\n') && (!EOF));
  ALUNO.NOTA1 = atof(ENTRANOTA);
  printf("1a. nota informada .: %5.2f\n", ALUNO.NOTA1);

  printf("2a. nota ...........: ");
  scanf("%[^\n]", &ENTRANOTA);
  while ((getchar() != '\n') && (!EOF));
  ALUNO.NOTA1 = atof(ENTRANOTA);
  printf("1a. nota informada .: %5.2f\n", ALUNO.NOTA2);

  printf("3a. nota ...........: ");
  scanf("%[^\n]", &ENTRANOTA);
  while ((getchar() != '\n') && (!EOF));
  ALUNO.NOTA1 = atof(ENTRANOTA);
  printf("1a. nota informada .: %5.2f\n", ALUNO.NOTA3);

  printf("4a. nota ...........: ");
  scanf("%[^\n]", &ENTRANOTA);
  while ((getchar() != '\n') && (!EOF));
  ALUNO.NOTA1 = atof(ENTRANOTA);
  printf("4a. nota informada .: %5.2f\n", ALUNO.NOTA1);
  printf("\n");

  // Tentativa de saida geral - erro de apresentacao

  printf("Nome informado .....: %s\n", ALUNO.NOME);
  printf("1a. nota informada .: %5.2f\n", ALUNO.NOTA1);
  printf("2a. nota informada .: %5.2f\n", ALUNO.NOTA2);
  printf("3a. nota informada .: %5.2f\n", ALUNO.NOTA3);
  printf("4a. nota informada .: %5.2f\n", ALUNO.NOTA4);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
