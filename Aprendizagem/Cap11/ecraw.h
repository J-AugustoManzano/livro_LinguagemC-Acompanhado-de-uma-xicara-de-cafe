// ecraw.h 
// Arquivo de cabecalho para controle do video modo windows.h

// Constantes para as cores de texto e fundo

#define black     0 // Preto
#define blue      1 // Azul
#define green     2 // Verde
#define cyan      3 // Ciano
#define red       4 // Vermelho
#define magenta   5 // Magenta
#define brown     6 // Marrom
#define lgray     7 // Cinza claro
#define dgray     8 // Cinza escuro
#define lblue     9 // Azul claro
#define lgreen   10 // Verde claro
#define lcyan    11 // Ciano claro
#define lred     12 // Vermelho claro
#define lmagenta 13 // Magenta claro
#define yellow   14 // Amarelo
#define white    15 // Branco

void clrscr(void);
void position(int LINHA, int COLUNA);
void clearline(void);
void color(int COR_FUNDO, int COR_TEXTO);
void pause(void);
void clrbufkey(void);
