#include <stdio.h>
#define PI 3.1415

int main() {
    int opcao;
    float raio, base, altura, area;

    printf("Escolha a figura para calcular a area: \n");
    printf("1 - Circulo\n");
    printf("2 - Retangulo\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Digite o raio do circulo: ");
        scanf("%f", &raio);
        area = PI * raio * raio;
        printf("A area do circulo eh: %.2f\n", area);
    } 
    else if (opcao == 2) {
        printf("Digite a base do retangulo: ");
        scanf("%f", &base);
        printf("Digite a altura do retangulo: ");
        scanf("%f", &altura);
        area = base * altura;
        printf("A area do retangulo eh: %.2f\n", area);
    } 
    else {
        printf("Opcao invalida! Escolha 1 para circulo ou 2 para retangulo.\n");
    }

    return 0;
}
