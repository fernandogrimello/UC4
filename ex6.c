/*
Programa Subtrai dois numeros :

Objetivo: subtrair primeiro numero lido pelo segundo e informar a subtracao na tela.

Entradas: dois numeros inteiros.

Saida: um numero inteiro (resultado da subtracao).
*/

#include <stdio.h>

int main( )
{
    int numero1, numero2;
    int subtracao;

    printf("Digite o primeiro numero:");
    scanf("%d", &numero1);

    printf("Digite o segundo numero:");
    scanf("%d", &numero2);

    subtracao = numero1 - numero2;

    printf("O resultado da subtracao eh: %d\n", subtracao);

    return 0;
}