#include "gerador.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void inserePonto(char Matriz[20][80], int Qtde){
    int x[Qtde], y[Qtde], valorAleatorio;
    srand(time(NULL));
    for(int i=0; i<Qtde; i++){
        valorAleatorio = rand()%1404;
        x[i] = valorAleatorio%78;
        y[i] = valorAleatorio/78;
    }
    for(int j=0; j<Qtde; j++){
        Matriz[y[j]+1][x[j]+1] = '#';
        printf("x = %d      y = %d \n", x[j], y[j]);
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
