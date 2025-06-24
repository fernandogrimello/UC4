/*
Faça um programa que peça para o usuário digitar
um número inteiro de 1 a 10 e gere sua respectiva
tabuada de multiplicação.
*/
#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero de 1 a 10: ");
    scanf("%d", &numero);

    if (numero < 1 || numero > 10) {
        printf("Numero fora do intervalo permitido.\n");
    } else {
        printf("Tabuada do %d:\n", numero);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }
    }

    return 0;
}