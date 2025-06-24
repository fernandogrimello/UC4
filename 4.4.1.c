/*
1 - Faça um programa que peça para o usuário digitar
    diversos números inteiros até que um dos
    números seja negativo.
*/
#include <stdio.h>

int main(){
    int numero;

    do {
        printf("Digite um numero inteiro (negativo para sair): ");
        scanf("%d", &numero);
    } while (numero >= 0);

    printf("numero negativo digitado. Programa encerrado.\n");
    return 0;
}
