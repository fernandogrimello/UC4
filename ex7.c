#include <stdio.h>

int main() {
    float distancia, tempo, velocidade;

    printf("Digite a distancia percorrida (em metros): ");
    scanf("%f", &distancia);

    printf("Digite o tempo gasto (em segundos): ");
    scanf("%f", &tempo);

    velocidade = distancia / tempo;

    printf("A velocidade do objeto eh: %.2f m/s\n", velocidade);

    return 0;
}