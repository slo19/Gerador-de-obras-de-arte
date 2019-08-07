#include "gerador.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void inserePonto(char Matriz[20][80], int Qtde){
    int x, y, valorAleatorio, controle=0;
    srand(time(NULL));
    
    while(controle<Qtde){
        valorAleatorio = rand()%1404;
        x = valorAleatorio%78;
        y = valorAleatorio/78;
        if (Matriz[y+1][x+1]==' '){
            Matriz[y+1][x+1] = '*';
            controle++;
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
    int x, y, valorAleatorio, controle=0;
    srand(time(NULL));  
    while(controle<Qtde){
        valorAleatorio = rand()%1216;
        x = valorAleatorio%76;
        y = valorAleatorio/76;
        if (Matriz[y+2][x+2]==' '&&Matriz[y+2][x+1]==' '&&Matriz[y+1][x+2]==' '&&Matriz[y+2][x+3]==' '&&Matriz[y+3][x+2]==' '){
            Matriz[y+2][x+2] = '*';
            Matriz[y+2][x+1] = '*';
            Matriz[y+2][x+3] = '*';
            Matriz[y+1][x+2] = '*';
            Matriz[y+3][x+2] = '*';
            controle++;
        }
    }
}
void insereX(char Matriz[20][80], int Qtde){
    int x, y, valorAleatorio, controle=0;
    srand(time(NULL));  
    while(controle<Qtde){
        valorAleatorio = rand()%1216;
        x = valorAleatorio%76;
        y = valorAleatorio/76;
        if (Matriz[y+2][x+2]==' '&&Matriz[y+1][x+1]==' '&&Matriz[y+3][x+1]==' '&&Matriz[y+1][x+3]==' '&&Matriz[y+3][x+3]==' '){
            Matriz[y+2][x+2] = '*';
            Matriz[y+3][x+1] = '*';
            Matriz[y+1][x+3] = '*';
            Matriz[y+1][x+1] = '*';
            Matriz[y+3][x+3] = '*';
            controle++;
        }
    }
}
void insereAleatorio(char Matriz[20][80], int Qtde){
    int x, y, valorAleatorio, controle=0, ponto, cruz, cheese;
    srand(time(NULL));
    ponto = rand()%Qtde;
    cruz = rand()%(Qtde-ponto);
    cheese = Qtde-(ponto+cruz);
    inserePonto(Matriz, ponto);
    insereCruz(Matriz, cruz);
    insereX(Matriz, cheese);
}