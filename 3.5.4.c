#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero inteiro de 1 a 4: ");
    scanf("%d", &numero);

    switch (numero){
        case 1:
        printf("\nO numero 1 eh o comeco de tudo, representa o principio de uma jornada, o ponto inicial da criacao. Ele simboliza a unidade, a fonte, aquilo de onde tudo emana. Em muitas tradicoes espirituais, eh associado ao 'Um', ao Todo, ao Criador, a Consciencia Universal.\n");
        break;

        case 2:
        printf("\nO 2 simboliza a coexistencia de opostos, luz e sombra, masculino e feminino, materia e espirito, yin e yang. Representa a necessidade de equilibrio entre essas polaridades e o entendimento de que ambas sao necessarias para a harmonia.\n");
        break;

        case 3:
        printf("\nSe o 1 eh o principio e o 2 eh a dualidade, o 3 eh o resultado da interacao entre eles,eh o numero da criacao. Simboliza o nascimento de algo novo, a manifestacao no plano material ou espiritual. Por isso, eh associado a criatividade e a expressao.\n");
        break;

        case 4:
        printf("\nO 4 simboliza os alicerces que sustentam qualquer construcao, fisica, emocional ou espiritual. Ele eh o numero da seguranca, do trabalho bem feito, da ordem. Assim como uma mesa ou uma casa precisam de quatro apoios, o 4 representa a solidez e a firmeza necessarias para crescer.\n");
        break;

        default:
        printf("Numero invalido. Digite um numero entre 1 e 4.\n");
    }

    return 0;
        
}