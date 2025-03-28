#include <stdio.h>

#define texto "Entrada e Saida de Dados"

int main()
{
    printf("%s\n", texto);

    int idade = 0;
    float altura = 0.0;
    char nome[50] = "";

    printf("\n Digite a idade: ");
    scanf("%d", &idade);

    printf("\n Digite a altura: ");
    scanf("%f", &altura);

    printf("\n Digite o nome: ");
    scanf("%s", nome);

    printf("\n \t DADOS INFORMADOS \n");
    printf("\n \t Idade: %d \n", idade);
    printf("\t Altura: %.2f \n", altura);
    printf("\t Nome: %s \n", nome);

    return 0;
}
