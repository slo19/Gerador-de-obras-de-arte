#include "gerador.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void inserePonto(char Matriz[20][80], int Qtde){
    int X, Y, ValorAleatorio, Controle=0;
    srand(time(NULL));
    
    while(Controle<Qtde){
        ValorAleatorio = rand()%1404;
        X = ValorAleatorio%78;
        Y = ValorAleatorio/78;
        if (Matriz[Y+1][X+1]==' '){
            Matriz[Y+1][X+1] = '*';
            Controle++;
        }
    }
}
void iniciaMatriz(char Matriz[20][80]){
    for(int i=0;i<20;i++){
        for(int j=0;j<80;j++){
            if(i==0||i==19){
                Matriz[i][j]= '-';
            }
            else{
                if(j==0||j==79){
                    Matriz[i][j] = '|';
                }
                else{
                    Matriz[i][j] = ' ';
                }
            }
        }
    }
}
void imprimirMatriz(char Matriz[20][80]){
    for(int i=0;i<20;i++){
        for(int j=0;j<80;j++){
            printf("%c", Matriz[i][j]);
        }
        printf("\n");
    }
}
void insereCruz(char Matriz[20][80], int Qtde){
    int X, Y, ValorAleatorio, Controle=0;
    srand(time(NULL));  
    while(Controle<Qtde){
        ValorAleatorio = rand()%1216;
        X = ValorAleatorio%76;
        Y = ValorAleatorio/76;
        if (Matriz[Y+2][X+2]==' '&&Matriz[Y+2][X+1]==' '&&Matriz[Y+1][X+2]==' '&&Matriz[Y+2][X+3]==' '&&Matriz[Y+3][X+2]==' '){
            Matriz[Y+2][X+2] = '*';
            Matriz[Y+2][X+1] = '*';
            Matriz[Y+2][X+3] = '*';
            Matriz[Y+1][X+2] = '*';
            Matriz[Y+3][X+2] = '*';
            Controle++;
        }
    }
}
void insereX(char Matriz[20][80], int Qtde){
    int X, Y, ValorAleatorio, Controle=0;
    srand(time(NULL));  
    while(Controle<Qtde){
        ValorAleatorio = rand()%1216;
        X = ValorAleatorio%76;
        Y = ValorAleatorio/76;
        if (Matriz[Y+2][X+2]==' '&&Matriz[Y+1][X+1]==' '&&Matriz[Y+3][X+1]==' '&&Matriz[Y+1][X+3]==' '&&Matriz[Y+3][X+3]==' '){
            Matriz[Y+2][X+2] = '*';
            Matriz[Y+3][X+1] = '*';
            Matriz[Y+1][X+3] = '*';
            Matriz[Y+1][X+1] = '*';
            Matriz[Y+3][X+3] = '*';
            Controle++;
        }
    }
}
void insereAleatorio(char Matriz[20][80], int Qtde){
    int X, Y, ValorAleatorio, Controle=0, Ponto, Cruz, Xis;
    srand(time(NULL));
    Ponto = rand()%Qtde;
    Cruz = rand()%(Qtde-Ponto);
    Xis = Qtde-(Ponto+Cruz);
    inserePonto(Matriz, Ponto);
    insereCruz(Matriz, Cruz);
    insereX(Matriz, Xis);
}
void checaInteiro(int *Qtde){
    if(*Qtde>100){
        *Qtde = 100;
    }else{
        if(*Qtde<1){
            srand(time(NULL));
            *Qtde = (rand()%100)+1;
        }   
    }
    printf("%d FOI A QUANTIDADE\n", *Qtde);
}
void obraCavalo(char Matriz[20][80]){
    Matriz[3][6]='-';
    Matriz[3][10]='-';
    Matriz[3][13]='-';
    Matriz[4][16]='-';
    Matriz[6][15]='-'; 
    Matriz[8][12]='-';
    Matriz[8][13]='-';   
    printf("AQUI FOI");
}