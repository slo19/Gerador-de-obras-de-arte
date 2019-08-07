#include <stdio.h>
#include <stdlib.h>
#include "gerador.h"
int main()
{
    char Quadro[20][80];

    iniciaMatriz(Quadro);
    inserePonto(Quadro,30);
    imprimirMatriz(Quadro);
}
