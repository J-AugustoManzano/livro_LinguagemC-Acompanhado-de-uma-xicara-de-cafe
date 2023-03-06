// C06EX16.C

#include <stdio.h>
#include <time.h>

#define BRASIL   -3 // BRASILIA
#define PORTUGAL  0 // LISBOA

int main(void)
{

  char PAUSA;

  struct tm *TEMPO_UTC;
  time_t AGORA;

  AGORA = time(NULL);

  TEMPO_UTC = gmtime(&AGORA);

  printf("PADRAO UTC .: ");
  printf("%02d:",  TEMPO_UTC->tm_hour);
  printf("%02d:",  TEMPO_UTC->tm_min);
  printf("%02d\n", TEMPO_UTC->tm_sec);

  printf("BRASIL .....: ");
  printf("%02d:",  TEMPO_UTC->tm_hour + BRASIL);
  printf("%02d:",  TEMPO_UTC->tm_min);
  printf("%02d\n", TEMPO_UTC->tm_sec);

  printf("PORTUGAL ...: ");
  printf("%02d:",  TEMPO_UTC->tm_hour + PORTUGAL);
  printf("%02d:",  TEMPO_UTC->tm_min);
  printf("%02d\n", TEMPO_UTC->tm_sec);

  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  PAUSA = getchar();

  return 0;
}
