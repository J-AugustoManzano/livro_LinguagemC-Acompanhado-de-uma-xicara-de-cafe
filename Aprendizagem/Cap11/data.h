// data.h 
// Arquivo de cabecalho para controle de data (calendario)
#include <stdbool.h>

struct SDATA
{
  short DATA_DIA, DATA_MES, DATA_ANO;
  bool  DATA_OK;
};

int   ultimodiames(void);
void  validadata(void);
void  alteradata(short DIA, short MES, short ANO);
void  mostradata(void);
bool  anobissexto(void);
