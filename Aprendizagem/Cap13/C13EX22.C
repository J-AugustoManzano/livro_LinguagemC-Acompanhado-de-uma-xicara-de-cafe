// C13EX22.C

/*

  Programa ...............: C13EX21.C
  Autor(es) ..............: Augusto Manzano
  Data ...................: 26/06/2014
   1a. Revisao - Versao ..: 26/06/2014 - 1.0
   2a. Revisao - Versao ..: DD/MM/AAAA - X.Y
   3a. Revisao - Versao ..: DD/MM/AAAA - X.Y
   Na. Revisao - Versao ..: DD/MM/AAAA - X.Y

*/

/**

  Este programa tem por finalidade gerenciar um arquivo escolar
  que opere os campos MATRICULA, NOME e NOTAS.

  Tem por objetivo demonstrar de forma mais profissional como
  pode ser feito uso da linguagem C para este tipo de operacao.

  O programa obedece rigidamente o uso do metodo de codificacao
  bottom-up.

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <iso646.h>
#include "stdgen.h"


#if defined _WIN32 || defined _WIN64

  /* Acoes exclusivas para modo: Windows API */

  #include <windows.h>

  // Limpar tela

  void clear(void)
  {
    HANDLE TELA;
    DWORD ESCRITA = 0;
    COORD POS;
    TELA = GetStdHandle(STD_OUTPUT_HANDLE);
    POS.X = 0;
    POS.Y = 0;
    FillConsoleOutputCharacter(TELA, 32, 80 * 25, POS, &ESCRITA);
  }

  // Posicionar cursor nos limites 80 x 24

  void position(int LINHA, int COLUNA)
  {
    if (COLUNA >= 1 && COLUNA <= 80 && LINHA >= 1 && LINHA <= 24)
    {
      HANDLE TELA;
      COORD POS;
      TELA = GetStdHandle(STD_OUTPUT_HANDLE);
      POS.X = COLUNA - 1;
      POS.Y = LINHA - 1;
      SetConsoleCursorPosition(TELA, POS);
    }
  }

  // Limpar linha a partir da posicao do cursor

  void clearline(void)
  {
    HANDLE TELA;
    COORD POS;
    CONSOLE_SCREEN_BUFFER_INFO VIDEO;
    DWORD ESCRITA = 0;
    TELA = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(TELA, &VIDEO);
    POS.Y = VIDEO.dwCursorPosition.Y;
    POS.X = VIDEO.dwCursorPosition.X;
    FillConsoleOutputCharacter(TELA, 32, 80 - POS.X , POS, &ESCRITA);
  }

#else

  /* Acoes exclusivas para modo: Terminal ANSI */

  // Limpar tela

  void clear(void)
  {
    printf("\033[2J");
  }

  // Limpar linha a partir da posicao do cursor

  void position(int LINHA, int COLUNA)
  {
    if (COLUNA >= 1 && COLUNA <= 80 && LINHA >= 1 && LINHA <= 24)
      printf("\033[%i;%iH", LINHA, COLUNA);
  }

  // Limpar linha a partir da posicao do cursor

  void clearline(void)
  {
    printf("\033[K");
  }

#endif

/**

 Definicao da estrutura de dados para o registro de alunos e
 das variaveis globais usadas no programa.

*/

struct REG_ALUNO
  {
    bool  STATUS;
    int   MATRICULA;
    char  NOME[51];
    float NOTAS[4];
  } ALUNO;

FILE *PTRARQ;
int  I, NR_MATRIC;
fpos_t POS;
char RESP;
char SISTEMA[29] = "PROGRAMA DE CADASTRO ESCOLAR";

/**

 Sub-rotinas exclusivas de apoio as operacoes do programa.

*/

// Efetua pesquisa sequencial dos dados no programa

bool pesquisa(int NR_MATRIC)
{
  bool ACHOU = false;
  rewind(PTRARQ);
  while (not(feof(PTRARQ)) and ACHOU != true)
    {
      fread(&ALUNO, sizeof(struct REG_ALUNO), 1, PTRARQ);
      if (NR_MATRIC == ALUNO.MATRICULA and ALUNO.STATUS != true)
        ACHOU = true;
    }
  return ACHOU;
}

// Apresenta a tela a partir de uma consulta realizada

void tela(void)
{
  position(10,17); clearline();
  position(11,17); clearline();
  position(12,17); clearline();
  position(13,17); clearline();
  position(14,17); clearline();
  position(15,17); clearline();
  position(10, 2); printf("Matricula ...: ");
  position(11, 2); printf("Nome ........: ");
  position(12, 2); printf("1a. Nota ....: ");
  position(13, 2); printf("2a. Nota ....: ");
  position(14, 2); printf("3a. Nota ....: ");
  position(15, 2); printf("4a. Nota ....: ");
}

// Mostra os dados quando da efetivacao de uma consulta

void mostradados(void)
{
  position(10,17); printf("%d", NR_MATRIC);
  position(11,17); printf("%s", ALUNO.NOME);
  for (I = 0; I <= 3; I++)
    {
      position(12 + I,17);
      printf("%5.2f", ALUNO.NOTAS[I]);
    }
}

/**

 Sub-rotinas gerais para controle do programa.

*/

// Traca linha

void line(const char *TIPO)
{

  int POSICAO;
  if (TIPO == "-" or TIPO == "=")
    for (POSICAO = 0; POSICAO <= 79; POSICAO++)
      printf(TIPO);
  else
    for (POSICAO = 0; POSICAO <= 79; POSICAO++)
      printf("-");
}

// Centraliza  ensagem no monitor de video em linha especificada

void center(int LINHA, const char *MENSAGEM)
{
  #include <string.h>
  int COLUNA;
  COLUNA = ((80 - strlen(MENSAGEM)) / 2);
  position(LINHA, COLUNA);
  printf(MENSAGEM);
}

/**

 Sub-rotinas de operacao do programa

*/

// Efetua cadastro dos dados no arquivo

void cadastrar(void)
{
  clear();
  position( 1, 1); line("-");
  center( 2, SISTEMA);
  center( 3, "Modulo de Cadastramento\n");
  position( 4, 1); line("-");
  position( 6, 2); printf("Digite os dados abaixo:");
  do
    {
      position(22, 2); printf("Digite [0] para voltar ao menu");
      position(23, 1); clearline();
      tela();
      position(10,17);
      scanf("%d", &NR_MATRIC);
      clrbufkey();
      if (NR_MATRIC != 0)
        {
          if (pesquisa(NR_MATRIC))
            {
              mostradados();
              position(22, 1); clearline();
              position(23, 1); clearline();
              position(22, 2); printf("Registro existente.");
              position(23, 2);
              pause("Tecle <Enter> para nova tentativa. ");
            }
          else
            {
              rewind(PTRARQ);
              do
                fread(&ALUNO, sizeof(struct REG_ALUNO), 1, PTRARQ);
              while (not(feof(PTRARQ) or ALUNO.STATUS == true));
              fgetpos(PTRARQ, &POS);
              if (ALUNO.STATUS == true)
                fseek(PTRARQ, (long) (fsetpos(PTRARQ, &POS) /
                sizeof(ALUNO) - 1) * sizeof(struct REG_ALUNO),
                SEEK_CUR);
              else
                fseek(PTRARQ, (long) sizeof(struct REG_ALUNO),
                SEEK_END);
              position(11,17);
              ALUNO.STATUS = false;
              fgets(ALUNO.NOME, sizeof(ALUNO.NOME), stdin);
              for (I = 0; I <= 3; I++)
                {
                  position(12 + I,18);
                  scanf("%f", &ALUNO.NOTAS[I]);
                  clrbufkey();
                }
              ALUNO.MATRICULA = NR_MATRIC;
              fwrite(&ALUNO, sizeof(struct REG_ALUNO), 1, PTRARQ);
              position(22, 1); clearline();
              position(23, 1); clearline();
              position(22, 1); printf("Registro cadastrado.");
              position(23, 1);
              pause("Tecle <Enter> para novo cadastro. ");
            }
        }
    }
  while (NR_MATRIC != 0);
}

// Consulta dados no arquivo

void consultar(void)
{
  clear();
  position( 1, 1); line("-");
  center( 2, SISTEMA);
  center( 3, "Modulo de Consulta\n");
  position( 4, 1); line("-");
  position( 6, 2); printf("Digite o numero de matricula:");
  do
    {
      position(22, 2); printf("Digite [0] para voltar ao menu");
      position(23, 1); clearline();
      tela();
      position(10,17);
      scanf("%d", &NR_MATRIC);
      clrbufkey();
      if (NR_MATRIC != 0)
        {
          if (pesquisa(NR_MATRIC))
            {
              mostradados();
              position(22, 1); clearline();
              position(23, 1); clearline();
              position(22, 2); printf("Registro apresentado.");
              position(23, 2);
              pause("Tecle <Enter> para nova consulta. ");
              position(16,17); clearline();
            }
          else
            {
              position(22, 1); clearline();
              position(23, 1); clearline();
              position(22, 2); printf("Registro nao cadastrado.");
              position(23, 2);
              pause("Tecle <Enter> para nova tentativa. ");
            }
        }
    }
  while (NR_MATRIC != 0);
}

// Efetua remocao dos dados no arquivo

void remover(void)
{
  clear();
  position( 1, 1); line("-");
  center( 2, SISTEMA);
  center( 3, "Modulo de Remocao\n");
  position( 4, 1); line("-");
  position( 6, 2); printf("Digite o numero de matricula:");
  do
    {
      position(22, 2); printf("Digite [0] para voltar ao menu");
      position(23, 1); clearline();
      tela();
      position(10,17);
      scanf("%d", &NR_MATRIC);
      clrbufkey();
      if (NR_MATRIC != 0)
        {
          if (pesquisa(NR_MATRIC))
            {
              mostradados();
              position(22, 1); clearline();
              position(23, 1); clearline();
              position(22, 2); printf("Remove registro? [S/N]: ");
              scanf("%c", &RESP);
              clrbufkey();
              if (toupper(RESP) == 'S')
              {
                fgetpos(PTRARQ, &POS);
                fseek(PTRARQ, (long) (fsetpos(PTRARQ, &POS) /
                sizeof(ALUNO) - 1) * sizeof(struct REG_ALUNO),
                SEEK_CUR);
                ALUNO.STATUS = true;
                fwrite(&ALUNO, sizeof(struct REG_ALUNO), 1, PTRARQ);
                position(22, 1); clearline();
                position(23, 1); clearline();
                position(22, 2);
                printf("Registro removido do arquivo.");
                position(23, 2);
                pause("Tecle <Enter> para nova remocao. ");
              }
            }
          else
            {
              position(22, 1); clearline();
              position(23, 1); clearline();
              position(22, 2); printf("Registro nao cadastrado.");
              position(23, 2);
              pause("Tecle <Enter> para nova tentativa. ");
            }
        }
    }
  while (NR_MATRIC != 0);
}

// Efetua alteracao do nome de um registro

void alternome(void)
{
  clear();
  position( 1, 1); line("-");
  center( 2, SISTEMA);
  center( 3, "Modulo de Alteracao de Nome\n");
  position( 4, 1); line("-");
  position( 6, 2); printf("Digite o numero de matricula:");
  do
    {
      position(22, 2); printf("Digite [0] para voltar ao menu");
      position(23, 1); clearline();
      tela();
      position(10,17);
      scanf("%d", &NR_MATRIC);
      clrbufkey();
      if (NR_MATRIC != 0)
        {
          if (pesquisa(NR_MATRIC))
            {
              mostradados();
              position(17, 2); printf("Novo nome ...: ");
              fgets(ALUNO.NOME, sizeof(ALUNO.NOME), stdin);
              fgetpos(PTRARQ, &POS);
              fseek(PTRARQ, (long) (fsetpos(PTRARQ, &POS) /
              sizeof(ALUNO) - 1) * sizeof(struct REG_ALUNO),
              SEEK_CUR);
              fwrite(&ALUNO, sizeof(struct REG_ALUNO), 1, PTRARQ);
              position(22, 1); clearline();
              position(23, 1); clearline();
              position(22, 2);
              printf("Nome atualizado no arquivo.");
              position(23, 2);
              pause("Tecle <Enter> para nova alteracao. ");
              position(17,16); clearline();
            }
          else
            {
              position(22, 1); clearline();
              position(23, 1); clearline();
              position(22, 2); printf("Registro nao cadastrado.");
              position(23, 2);
              pause("Tecle <Enter> para nova tentativa. ");
            }
        }
    }
  while (NR_MATRIC != 0);
}

// Efetua alteracao de nota especifica de um registro

void alternota(void)
{
  clear();
  position( 1, 1); line("-");
  center( 2, SISTEMA);
  center( 3, "Modulo de Alteracao de Notas\n");
  position( 4, 1); line("-");
  position( 6, 2); printf("Digite o numero de matricula:");
  do
    {
      position(22, 2); printf("Digite [0] para voltar ao menu");
      position(23, 1); clearline();
      tela();
      position(10,17);
      scanf("%d", &NR_MATRIC);
      clrbufkey();
      if (NR_MATRIC != 0)
        {
          if (pesquisa(NR_MATRIC))
            {
              mostradados();
              position(17, 2); printf("Qual nota ...: ");
              scanf("%i", &I);
              clrbufkey();
              position(18, 2); printf("Nova nota ...: ");
              scanf("%f", &ALUNO.NOTAS[I - 1]);
              clrbufkey();
              fgetpos(PTRARQ, &POS);
              fseek(PTRARQ, (long) (fsetpos(PTRARQ, &POS) /
              sizeof(ALUNO) - 1) * sizeof(struct REG_ALUNO),
              SEEK_CUR);
              fwrite(&ALUNO, sizeof(struct REG_ALUNO), 1, PTRARQ);
              position(22, 1); clearline();
              position(23, 1); clearline();
              position(22, 2);
              printf("Nota atualizada no arquivo.");
              position(23, 2);
              pause("Tecle <Enter> para nova alteracao. ");
              position(17,16); clearline();
              position(18,16); clearline();
            }
          else
            {
              position(22, 1); clearline();
              position(23, 1); clearline();
              position(22, 2); printf("Registro nao cadastrado.");
              position(23, 2);
              pause("Tecle <Enter> para nova tentativa. ");
            }
        }
    }
  while (NR_MATRIC != 0);
}

// Menu secundario: Alteracao de Dados

void menusec(void)
{

  char OPCAO;

  do
    {
      clear();
      position( 1, 1); line("-");
      center( 2, SISTEMA);
      center( 3, "Menu Alterar\n");
      position( 4, 1); line("-");
      position( 8,26); printf("Nome ..................: [1]");
      position(10,26); printf("Nota ..................: [2]");
      position(12,26); printf("Volta Menu Principal ..: [3]");
      position(22,26); printf("Entre com a opcao: --> ");
      scanf("%c", &OPCAO);
      clrbufkey();
      switch(toupper(OPCAO))
        {
          case '1' : alternome(); break;
          case '2' : alternota(); break;
        }
    }
  while (OPCAO != '3');

}

// Menu principal: Gerenciamento do Arquivo

void menupri(void)
{

  char OPCAO;

  do
    {
      clear();
      position( 1, 1); line("-");
      center( 2, SISTEMA);
      center( 3, "Menu Principal\n");
      position( 4, 1); line("-");
      position( 8,26); printf("Cadastrar .............: [1]");
      position(10,26); printf("Consultar .............: [2]");
      position(12,26); printf("Remover ...............: [3]");
      position(14,26); printf("Alterar ...............: [4]");
      position(16,26); printf("Finalizar .............: [5]");
      position(22,26); printf("Entre com a opcao: --> ");
      scanf("%c", &OPCAO);
      clrbufkey();
      switch(OPCAO)
        {
          case '1' : cadastrar(); break;
          case '2' : consultar(); break;
          case '3' : remover();   break;
          case '4' : menusec();   break;
        }
    }
  while (OPCAO != '5');

}

/**

 Programa principal.

*/

int main(void)
{

  /* Verifica se o arquivo existe, se nao cria-o */

  if ((PTRARQ = fopen("ARQBIN07.BIN", "rb+")) == NULL)
    PTRARQ = fopen("ARQBIN07.BIN", "wb+");

  /* Chama menu principal */

  menupri();

  fflush(stdout);
  fclose(PTRARQ);
  return 0;

}
