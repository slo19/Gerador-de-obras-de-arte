#include <stdio.h>
#include <stdlib.h>
#include "gerador.h"
#include "menu.h"
int main()
{
    char Quadro[20][80], Continuar;
    int Opcao, Quantidade;
    do{
    iniciaMatriz(Quadro);
    inicio();
    scanf("%d", /* code */&Opcao);
    if(Opcao>0&&Opcao<5){
        pedeQuantidade();
        scanf("%d", &Quantidade);
    }else{
        pedePalpite();
        scanf("%d", &Quantidade);
    }
    switch (Opcao)
    {
    case 1:
        checaInteiro(&Quantidade);
        inserePonto(Quadro, Quantidade);
        imprimirMatriz(Quadro);
        break;
    case 2:
        checaInteiro(&Quantidade);
        insereCruz(Quadro, Quantidade);
        imprimirMatriz(Quadro);
        break;
    case 3:
        checaInteiro(&Quantidade);
        insereX(Quadro, Quantidade);
        imprimirMatriz(Quadro);
        break;
    case 4:
        checaInteiro(&Quantidade);
        insereAleatorio(Quadro, Quantidade);
        imprimirMatriz(Quadro);
        break;
    default:
        criaGota(Quadro, Quantidade);
        imprimirMatriz(Quadro);
        break;
    }
    printf("Deseja continuar?(s ou S = Sim, qualquer outra coisa = Não) ");
    scanf(" %c", &Continuar);
    } while (Continuar=='s'||Continuar=='S');
    printf("\n\n-------------------------- ");   
    printf("SAULO MIRANDA SILVA - 3475");
    printf(" --------------------------\n\n"); 
}
