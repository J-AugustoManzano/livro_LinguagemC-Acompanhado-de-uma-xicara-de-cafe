// C09EX08.C

#include <stdio.h>
#include <ctype.h>

int main(void)
{

  char PAUSA;

  struct PESSOA_FISICA
  {
    char CPF[15];
  };

  struct PESSOA_JURIDICA
  {
    char CNPJ[20];
  };

  union PESSOA
  {
    struct PESSOA_FISICA   F;
    struct PESSOA_JURIDICA J;
  };

  struct CLIENTE
  {
    char NOME[80];
    char TIPO;
    union PESSOA PES;
  };

  struct CLIENTE CLI;

  printf("Memoria: %i bytes.\n", sizeof(struct CLIENTE));

  printf("Informe o nome ......: ");
  scanf("%[^\n]", &CLI.NOME);
  while ((getchar() != '\n') && (!EOF));

  printf("Informe o tipo ......: ");
  scanf("%[^\n]", &CLI.TIPO);
  while ((getchar() != '\n') && (!EOF));

  if (toupper(CLI.TIPO) == 'F')
  {
    printf("Informe o cpf ......: ");
    scanf("%[^\n]", &CLI.PES.F.CPF);
    while ((getchar() != '\n') && (!EOF));
  }
  else
  {
    printf("Informe o cnpj .....: ");
    scanf("%[^\n]", &CLI.PES.J.CNPJ);
    while ((getchar() != '\n') && (!EOF));
  }

  printf("\n");
  printf("Saida de Dados\n\n");
  printf("%s\n", CLI.NOME);
  if (toupper(CLI.TIPO) == 'F')
    printf("%s\n", CLI.PES.F.CPF);
  else
    printf("%s\n", CLI.PES.J.CNPJ);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
