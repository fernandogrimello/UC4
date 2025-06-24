#include <stdio.h>

int main()
{
    int opcao;
    printf("Menu principal:\n");
    printf("1 - Imprimir mensagem 1\n");
    printf("2 - Imprimir mensagem 2\n");
    printf("3 - Sair\n");

    do 
    {
        printf("Digite a opcao:");
        scanf("%d, &opcao");
        switch(opcao)
        {
            case 1:
            printf("Va em frtente!\n");
            break;

            case 2:
            printf("Insista e nunca desista!\n");
            break;

            case 3:
            printf("Encerrando o programa...");
            break;
            default:
            printf("Opcao invalida.\n");
        }
    }
    while ("Opcao != 3");

    
    return 0;
}