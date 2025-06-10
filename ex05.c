#include <stdio.h>

int main()
{
    //declaracoes
    int idade = 26;
    float valorDoPgto = 12.42;
    double velParticula = 2.92817029837;
    char tipoHabMotor = 'A';

    //instrucoes

    printf("Informe a idade:");
    scanf("%d", &idade);

    printf("Informe o valor de pagamento:");
    scanf("%d", &valorDoPgto);

    printf("Informe a velocidade da particula:");
    scanf("%lf", &velParticula);

    printf("Informe o tipo de habilitacao:");
    scanf("%c", &tipoHabMotor);

    printf("Dados informados: %d, %f, %lf, %c\n", idade, valorDoPgto, velParticula, tipoHabMotor);

    return 0; //encerramento do programa
}