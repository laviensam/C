#include <stdio.h>

int main()
{
    int idade = 0;
    int ano = 0;
    float peso = 0.0;

    printf("\n Digite a sua idade: ");
    scanf("%d", &idade);

    printf("\n Digite o seu ano de nascimento: ");
    scanf("%d", &ano);

    printf("\n Digite o seu peso: ");
    scanf("%f", &peso);

    printf("\n \t Idade informada: %d. \n", idade);
    printf("\t Ano de nascimento informado: %d.\n", ano);
    printf("\t Peso informado: %.3f. \n", peso);

    return 0;
}
