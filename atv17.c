//funçoes c
#include <stdio.h>
//declaração da funçao
int soma(int a, int b);
int main(){
    //declaração  de variaveis
    int x = 5, y = 3;

    //chamada da função

    int resultado = soma(x,y);
    printf("A soma de %d, e %d é: %d\n", x, y, resultado);
    return 0;
}

//definicao da função
int soma(int a, int b){
    return a + b;
}
