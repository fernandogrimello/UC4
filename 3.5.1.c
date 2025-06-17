#include <stdio.h>

int main()
{
    int numero;
    //solicita ao usuário um número inteiro

        printf("Digite um numero inteiro: \n");
        scanf("%d",&numero);

    //verifica se o numero é positivo, negativo, ou nulo
    if (numero >0){
       printf("O numero eh positivo. \n");
    } else if (numero < 0){
        printf("o numero eh negativo.\n");
    } else{
        printf("o numero eh nulo (zero).\n");
    }
    
     return 0;
}