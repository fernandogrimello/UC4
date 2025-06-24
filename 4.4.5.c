/*
Faça um programa que auxilie uma pesquisa a coletar as seguintes informações sobre cada um dos moradores de um bairro: idade (inteiro), sexo (caractere 'm' ou 'f') e salário (float). O usuário deverá preencher as informações de cada habitante até que seja digitado o valor 0 para idade. Ao final o programa deve calcular e informar os seguintes dados:
a. A maior idade.
b. Amédia salarial.
c. A quantidade de mulheres.
d. Existe salario abaixo de 500?
*/
#include <stdio.h>

int main() {
    int idade, totalMulheres = 0, maiorIdade = 0, totalHabitantes = 0;
    char sexo;
    float salario, somaSalarios = 0;
    int salarioAbaixo500 = 0;

    do {
        printf("\nDigite a idade (0 para sair): ");
        scanf("%d", &idade);

        if (idade == 0) break;

        printf("Digite o sexo (m/f): ");
        scanf(" %c", &sexo);

        printf("Digite o salário: R$ ");
        scanf("%f", &salario);

        totalHabitantes++;
        somaSalarios += salario;

        if (sexo == 'f' || sexo == 'F') {
            totalMulheres++;
        }

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        if (salario < 500) {
            salarioAbaixo500 = 1;
        }

    } while (1);

    if (totalHabitantes > 0) {
        printf("\n--- Resultados da Pesquisa ---\n");
        printf("a. Maior idade: %d anos\n", maiorIdade);
        printf("b. Média salarial: R$ %.2f\n", somaSalarios / totalHabitantes);
        printf("c. Quantidade de mulheres: %d\n", totalMulheres);
        printf("d. Existe salário abaixo de R$500? %s\n", salarioAbaixo500 ? "Sim" : "Não");
    } else {
        printf("\nNenhum dado foi inserido.\n");
    }

    return 0;
}