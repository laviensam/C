#include <stdio.h>

int main()
{
    int dado = 10;
    printf("Dado: %d. \n", dado);

    dado++;
    printf("\t \t \n Dado depois do incremento: %d. \n", dado);

    dado = 10;

    dado--;
    printf("\t \t \n Dado depois do decremento: %d. \n", dado);

    dado = 10;

    dado += 3;
    printf("\t \t \n Dado depois do incremento em 3 unidades: %d. \n", dado);

    dado = 10;

    dado -= 3;
    printf("\t \t \n Dado depois do decremento em 3 unidades: %d. \n", dado);

    dado = 10;

    dado *= 10;
    printf("\t \t \n Dado depois da atribuicao com multiplicacao por 10: %d \n", dado);

    dado = 10;

    dado /= 10;
    printf("\t \t \n Dado depois da atribuicao com divisao por 10: %d \n", dado);

    return 0;
}
