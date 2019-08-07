#include "gerador.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void inserePonto(char *Matriz[][], int Qtde){
    int x[Qtde], y[Qtde], valorAleatorio;
    srand(time(NULL));
    for(int i=0; i<Qtde; i++){
        valorAleatorio = rand()%1600;
        x[i] = valorAleatorio%80;
        y[i] = valorAleatorio/80;
    }
    for(int i=0; i<Qtde; i++){
        *(Matriz)[x[i]][y[i]] = "*";
    }
}

void iniciaMatriz(char *Matriz[][]){
    for(int i=0;i<20;i++){
        for(int j=0;j<80;j++){
            if(i==0||i==19){
                *(Matriz)[i][j]= "-";
            }
            else{
                if(j==0||j==79){
                    *(Matriz)[i][j] = "|";
                }
                else{
                    *(Matriz)[i][j] = " ";
                }
            }
        }
    }
}

void imprimirMatriz(char *Matriz[][]){
    for(int i=0;i<20;i++){
        for(int j=0;j<80;j++){
            printf("%c", *(Matriz)[i][j]);
        }
        printf("\n");
    }
}
