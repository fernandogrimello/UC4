/*
Programa prog 7.b
Objetivo:ler um valor fornecido pelo usuario e exibi-lo
Entrada:um numero inteiro
Saida:o numero inteiro informado
*/
#include<stdio.h>

int main()
{
    int a;

    printf("Digite o valor: ");
    scanf("%d", &a); //corrigido virgula, deve ser apenas "%d"

    printf("a = %d\n", a); //corrigido: adicionado ponto e virgula no final

    return 0;

}