/*
  Faça um programa que peça para o usuário digitar diversos
  valores de compras não negativos e apresente a soma desses
  valores quando o usuário digitar o valor zero.
*/
#include<stdio.h>

int main(){
    float valor, soma = 0;

    do {
      printf("Digite o valor da compra (0 para finalizar): ");
      scanf("%f", &valor);

      if (valor > 0) {
        soma += valor;  
      }
    } while (valor != 0);

    printf("A soma total das compras e: R$ %.2f\n", soma);
    return 0;
    
}