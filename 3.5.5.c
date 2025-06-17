#include <stdio.h>

int main() {
    double valorCompra, valorTotal;  
    int tipoProduto;

    printf("Digite o valor da compra: R$ ");
    scanf("%lf", &valorCompra);      

    printf("Digite o tipo do produto internacional (0 para taxa de 10%%, outro numero para 20%%): ");
    scanf("%d", &tipoProduto);

    if (tipoProduto == 0) {
        valorTotal = valorCompra * 1.10;
    } else {
        valorTotal = valorCompra * 1.20;
    }

    printf("O valor total a ser pago eh: R$ %.2lf\n", valorTotal);  

    return 0;
}
