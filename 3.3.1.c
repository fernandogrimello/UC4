#include<stdio.h>
int main()
{
    char dir;
    
        printf("Digite uma direcao (w, a, s, d):");
        scanf("%c", &dir);
    switch (dir)
    {
    case 'w':
        printf("Cima");
        break;
    case 'a':
        printf("Esquerda");
        break;
    case 's':
        printf("Baixo");
        break;
    case 'd':
        printf("Direita");
        break;    
    default:
        printf("Comando invalido");    
    }
    return 0;
}