// C12EX35.C

#include <stdio.h>
#include "stdgen.h"
#include "calendar.h"

int main(void)
{

  char DATA[11];
  short DIA, MES, ANO;

  do
    {
      printf("\nInforme data de aniversario no formato DD/MM/AAAA: ");
      scanf("%[^\n]", &DATA);
      clrbufkey();
    }
  while (strlen(DATA) < 10);

  DIA = sday(DATA);
  MES = smonth(DATA);
  ANO = syear(DATA);

  if (validate(DATA))
    printf("\nDia .......................: %02hi\n", DIA);
  else
    printf("\nDia .......................: **\n");
  if (validate(DATA))
    printf("Mes .......................: %02hi\n", MES);
  else
    printf("Mes .......................: **\n");
  if (validate(DATA))
    printf("Ano .......................: %04hi\n", ANO);
  else
    printf("Ano .......................: ****\n", ANO);

  if (validate(DATA))
    if (leapyear(DATA))
      printf("\nAno .......................: BISSEXTO\n");
    else
      printf("\nAno .......................: NORMAL\n");
  else
    printf("\nAno .......................: ENTRADA INCORRETA\n");

  if (validate(DATA))
    printf("\nData correta ..............: %s\n", DATA);
  else
    printf("\nData incorreta ............: **/**/****\n");

  if (validate(DATA))
    printf("\nUltimo dia do mes .........: %ld", lastday(DATA));
  else
    printf("\nUltimo dia do mes .........: **");

  if (validate(DATA))
    printf("\nData formato ANSI .........: %ld", dateansi(DATA));
  else
    printf("\nData formato ANSI .........: ********");

  if (validate(DATA))
    printf("\nDia juliano ...............: %ld", julianday(DATA));
  else
    printf("\nDia juliano ...............: *******");

  if (validate(DATA))
    {
      printf("\nDia da semana .............: ");
      switch (dayweek(DATA))
        {
          case 0: printf("sabado");        break;
          case 1: printf("domingo");       break;
          case 2: printf("segunda-feira"); break;
          case 3: printf("terca-feira");   break;
          case 4: printf("quarta-feira");  break;
          case 5: printf("quinta-feira");  break;
          case 6: printf("sexta-feira");   break;
        }
    }
  else
    printf("\nDia da semana .............: ENTRADA INCORRETA");
  printf("\n");

  printf("\n");
  pause("Tecle <Enter> para prosseguir... ");

  return 0;
}
