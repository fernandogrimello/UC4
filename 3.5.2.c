#include <stdio.h>

int main() {
    float num1, num2, num3, maior;

    
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    
    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);

    
    maior = num1;

    if (num2 > maior) {
        maior = num2;
    }

    if (num3 > maior) { 
        maior = num3;
    }

   
    printf("O maior numero digitado eh: %.2f\n", maior);

    return 0;
}