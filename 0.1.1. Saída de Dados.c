#include <stdio.h>

int main()
{
    printf("23 anos. \n");

    printf("\n \t Valor inteiro: %d.\n", 23);                              // %d especifica o formato para valor inteiro
    printf("\n \t Valor real: %f. \n", 23.130000);                         // %f especifica o formato para números com casas decimais
    printf("\n \t Valor real com apenas duas casas: %.2f. \n", 23.130000); // %.f especifica o formato para a quantidade de números após o ponto a ser exibida
    printf("\n \t Dado de texto: %c. \n", 'S');                            // %c especifica o formato para um caractere
    printf("\n \t Dado de texto: %s. \n", "Sam");                          // %s especifica o formato para mais de um caractere

    return 0;
}
