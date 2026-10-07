#include "headers.h"


void gotoxy(int x, int y){
    COORD c;
    c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void moldura(int linhaInicial, int linhaFinal, int colunaInicial, int colunaFinal, int tipo){
    int l, c;
    int borda[2][6] = {{205, 186, 201, 187, 200, 188},//Linha da matriz das bordas duplas
                      {196, 179, 218, 191, 192, 217}};//Linha da matriz das bordas simples

    //Faz a borda de cima
    for(c=colunaInicial+1; c<=colunaFinal-1;c++){
        gotoxy(c,linhaInicial); printf("%c", borda[tipo][0]);
        gotoxy(c,linhaFinal); printf("%c", borda[tipo][0]);
    }

    //Faz as bordas das laterais
    for(l=linhaInicial+1;l<=linhaFinal-1;l++){
        gotoxy(colunaInicial,l);printf("%c", borda[tipo][1]);
        gotoxy(colunaFinal,l);printf("%c", borda[tipo][1]);
    }

    //Coloca os cantos da moldura
    gotoxy(colunaInicial,linhaInicial); printf("%c", borda[tipo][2]);
    gotoxy(colunaFinal,linhaInicial); printf("%c", borda[tipo][3]);
    gotoxy(colunaInicial,linhaFinal);printf("%c", borda[tipo][4]);
    gotoxy(colunaFinal,linhaFinal); printf("%c", borda[tipo][5]);
}



