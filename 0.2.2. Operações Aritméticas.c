#include <stdio.h>

int main()
{
    int A, B, soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &A);

    printf("\n Digite o segundo valor: \n");
    scanf("%d", &B);

    soma = A + B;
    subtracao = A - B;
    multiplicacao = A * B;
    divisao = A / B;

    printf("\t \n RESULTADOS \n");
    printf("\t \t Soma: %d \n", soma);
    printf("\t \t Subtracao: %d \n", subtracao);
    printf("\t \t Multiplicacao: %d \n", multiplicacao);
    printf("\t \t Divisao: %d \n", divisao);

    return 0;
}
