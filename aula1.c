#include<stdio.h>

int main(){

    //Variáveis
    int idade = 20;
    float valorDoPgto = 12.42;
    double velParticula = 2.92817029837;
    char tipoHabMotor = 'A';

    //Instruções
    printf("\nInforme a idade: " );
    scanf("%d", &idade);

    printf("Informe o valor do pagamento: ");
    scanf("%d", &valorDoPgto);

    printf("Informe a velocidade da particula: ");
    scanf("%d", &velParticula);

    printf("Informe o tipo de habilitacao: ");
    scanf("%d", &tipoHabMotor);

    printf("Dados informados: %d, %f, %lf, %c \n", idade, valorDoPgto, velParticula, tipoHabMotor);

    return 0;


}