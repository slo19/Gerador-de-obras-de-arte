#include "menu.h"
#include <stdio.h>

void inicio(){
    printf("PROGRAMA GERADOR DE OBRA DE ARTE:\n");
    printf("--------------------------------------------------------------\n");
    printf("Escolha o tipo de figura básica a ser usada para criar a obra:\n");
    printf("1. Asterisco simples\n");
    printf("2. Símbolo de soma com asteriscos\n");
    printf("3. Letra X com asteriscos\n");
    printf("4. Figuras aleatórias\n");
    printf("5 ou qualquer outro número - obra de arte criada pelo aluno\n");
    printf("--------------------------------------------------------------\n");
    printf("Digite a opção desejada: ");

}
void pedeQuantidade(){
    printf("Quantidade desejada de figuras(Máx. 100 e menor ou igual a zero para aleatório): ");
}
void pedePalpite(){
    printf("Quantas gotas acha que choverá?(Dica: de 0 a 30)\n");
}