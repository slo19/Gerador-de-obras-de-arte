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
    printf("Asteriscos simples: %d\nSinal de mais: %d\nLetra X: %d\n", Ponto,Cruz,Xis);
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
}
void criaGota(char Matriz[20][80], int Palpite){
    int X, Y, ValorAleatorio, QuantidadeAleatoria, Controle = 0, Erro;
    srand(time(NULL));
    QuantidadeAleatoria = (rand()%30)+1;
    ValorAleatorio = rand()%1092;
    Erro = QuantidadeAleatoria-Palpite;
    X = ValorAleatorio%73;
    Y = ValorAleatorio/73;
    while(Controle<QuantidadeAleatoria){
        ValorAleatorio = rand()%1092;
        X = ValorAleatorio%73;
        Y = ValorAleatorio/73;
        if(Matriz[Y+1][X+3]==' '&&Matriz[Y+1][X+4]==' '&&Matriz[Y+2][X+2]==' '&&Matriz[Y+2][X+5]==' '&&Matriz[Y+3][X+1]==' '&&Matriz[Y+3][X+6]==' '&&Matriz[Y+4][X+1]==' '&&Matriz[Y+4][X+6]==' '&&Matriz[Y+5][X+2]==' '&&Matriz[Y+5][X+3]==' '&&Matriz[Y+5][X+4]==' '&&Matriz[Y+5][X+5]==' '){
            Matriz[Y+1][X+3] ='/';
            Matriz[Y+1][X+4] ='\\';
            Matriz[Y+2][X+2] ='/';
            Matriz[Y+2][X+5] ='\\';
            Matriz[Y+3][X+1] ='/';
            Matriz[Y+3][X+6] ='\\';
            Matriz[Y+4][X+1] ='\\';
            Matriz[Y+4][X+6] ='/';
            Matriz[Y+5][X+2] ='\'';
            Matriz[Y+5][X+3] ='~';
            Matriz[Y+5][X+4] ='~';
            Matriz[Y+5][X+5] ='\'';
        Controle++;
        }
    }
    if(Erro<0)
        Erro = Erro*(-1);

    if(Erro>25){
        printf("----------------------\n");
        printf("ERROU FEIO, ERROU RUDE\n");
        printf("----------------------\n");
    }else if(Erro>20){
        printf("------------------\n");
        printf("ERROOOOOOOOOOOUUUU\n");  
        printf("------------------\n");   
    }else if(Erro>15){
        printf("--------------------------------------------\n");
        printf("TÁ MAIS FÁCIL OS TRAPALHÕES GANHAREM O OSCAR\n");
        printf("--------------------------------------------\n");
    }else if(Erro>10){
        printf("---------------------------------------------------\n");
        printf("QUE BOM QUE VOCÊ NÃO TRABALHA COM PREVISÃO DO TEMPO\n");
        printf("---------------------------------------------------\n");
    }else if(Erro>5){
        printf("---------------------------------------------\n");
        printf("QUASE ACERTOU, MAS NÃO DESISTA, ERRE DE NOVO!\n");
        printf("---------------------------------------------\n");
    }else if(Erro>0){
        printf("-----------------------------\n");
        printf("PASSOU PERTO, TENTE OUTRA VEZ\n");
        printf("-----------------------------\n");
    }else{
        printf("---------------------------------------------------------------------\n");
        printf("VAI GANHAR, VAI PERDER, VAI GANHAR, VAI PERDER, PERDEEEU, GANHOOOOOUU\n");
        printf("---------------------------------------------------------------------\n");
    }
    printf("A resposta certa é %d\n", QuantidadeAleatoria);

}