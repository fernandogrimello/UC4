#include<stdio.h>
#define num_alunos 5

int main()
{
    int i;
    float nota;
    for (i = 0; i <num_alunos; i++)
    {
        printf("Digite a nota do aluno %d:", i);
        scanf("%f", &nota);
        if(nota >= 6)
        printf("O aluno %d foi aprovado:\n",i);
        else
        printf("O aluno %d foi reprovado: \n",i);

    }
    return 0;
}
