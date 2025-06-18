#include <stdio.h>
#include <string.h>

int main() {
    int codigos[16] = {1,2,3,4,5,6,7,8,9, 10,11,12,13,14,15,16};
    char nomes[16][50] = {
        "X-Ratao",
        "Ratoburguer",
        "Cheeserat Burguer",
        "Ratatouille (Vegetariano)",
        "Ratazana",
        "Ratoeira",
        "Mestre Splinter",
        "Atomic Rat",
        "X-Ramistain",
        "Bebida da casa",
        "Coca-Cola 2L",
        "Coca-Cola 600ml",
        "Coca-Cola lata",
        "Guarana 2L",
        "Guarana 600ml",
        "Guarana lata"
    };
    char ingredientes[16][200] = {
        "Pao, 2 hamburgueres, milho, 2 ovos, salsicha e queijo",
        "Pao, carne de hamburguer, ovo, queijo, alface, tomate",
        "Pao, carne de hamburguer, queijo",
        "Hamburguer de carne de jaca, alface, pao e toffu",
        "Pao, 2 hamburgueres, queijo, presunto, alface, tomate, bacon, cebola roxa, ovo",
        "Pao, frango empanado, queijo, alface, tomate",
        "Pao, queijo, 1 hamburguer de carne, 1 frango empanado, bacon, presunto, salsicha, ovo, cebola caramelizada",
        "Pao, 2 hamburguer de carne, 2 frango empanado, 4 salsicha, 2 ovos, cebola empanada, 2 ovos de codorna, milho, batata palha, vinagrete, calabresa, bacon",
        "Pao, queijo, hamburguer ou frango empanado",
        "---",
        "---",
        "---",
        "---",
        "---",
        "---",
        "---"
    };
    float precos[16] = {
        25.00, 22.00, 18.00, 20.00, 30.00, 23.00, 35.00, 45.00, 20.00,
        8.00, 10.00, 8.00, 5.00, 10.00, 8.00, 5.00
    };

    int itens_pedidos[100];
    int quantidades[100];
    int trios[100];
    int total_itens = 0;

    float subtotal = 0.0;
    char continuar = 'S';
    int opcao;

    printf("========================================\n");
    printf("     Bem-vindo a Lanchonete do Ratao!\n");
    printf("========================================\n");

    do {
        printf("\nO que deseja fazer?\n");
        printf("1 - Fazer pedido\n");
        printf("2 - Ver ingredientes dos lanches\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 2) {
            printf("\n--- INGREDIENTES DOS LANCHES ---\n");
            for (int i = 0; i < 9; i++) {
                printf("%d - %s:\n    %s\n", codigos[i], nomes[i], ingredientes[i]);
            }
            printf("\n--- BEBIDAS ---\n");
            for (int i = 9; i < 16; i++) {
                printf("%d - %s\n", codigos[i], nomes[i]);
            }
        }

        if (opcao == 1) {
            continuar = 'S';
            subtotal = 0.0;
            total_itens = 0;

            while (continuar == 'S' || continuar == 's') {
                printf("\n--- CARDAPIO ---\n");
                printf("LANCHES:\n");
                for (int i = 0; i < 9; i++) {
                    printf("%d - %s (R$ %.2f)\n", codigos[i], nomes[i], precos[i]);
                }

                printf("\nBEBIDAS:\n");
                for (int i = 9; i < 16; i++) {
                    printf("%d - %s (R$ %.2f)\n", codigos[i], nomes[i], precos[i]);
                }

                int cod_item, quantidade;
                printf("Digite o codigo do item desejado (ou 0 para CANCELAR o pedido): ");
                scanf("%d", &cod_item);

                if (cod_item == 0) {
                    char confirma_cancelamento;
                    printf("Tem certeza que deseja CANCELAR o pedido atual? (S/N): ");
                    scanf(" %c", &confirma_cancelamento);
                    if (confirma_cancelamento == 'S' || confirma_cancelamento == 's') {
                        printf("\nPedido cancelado com sucesso!\n");
                        subtotal = 0.0;
                        total_itens = 0;
                        break; // Volta ao menu principal
                    } else {
                        continue; // Continua no pedido
                    }
                }

                int indice = -1;
                if (cod_item >= 1 && cod_item <= 16) {
                    indice = cod_item - 1;
                } else {
                    printf("Codigo invalido! Tente novamente.\n");
                    continue;
                }

                printf("Digite a quantidade: ");
                scanf("%d", &quantidade);
                if (quantidade <= 0) {
                    printf("Quantidade invalida! Tente novamente.\n");
                    continue;
                }

                float preco_item = precos[indice];
                trios[total_itens] = 0; // Por padrão bebidas não tem trio

                if (indice < 9) { // Apenas lanches oferecem trio
                    char trio;
                    printf("Deseja fazer TRIO com refrigerante e batata pequena por +R$10? (S/N): ");
                    scanf(" %c", &trio);

                    if (trio == 'S' || trio == 's') {
                        preco_item += 10.00;
                        trios[total_itens] = 1;
                    }
                }

                float total_item = preco_item * quantidade;
                subtotal += total_item;

                itens_pedidos[total_itens] = indice;
                quantidades[total_itens] = quantidade;
                total_itens++;

                printf("%d x %s %s = R$ %.2f\n", quantidade, nomes[indice], (trios[total_itens-1] ? "(TRIO)" : ""), total_item);

                printf("Deseja adicionar mais itens? (S/N): ");
                scanf(" %c", &continuar);
            }

            if (total_itens == 0) {
                continue; // Nenhum item adicionado ou pedido cancelado
            }

            // Desconto manual
            char aplicar_desconto;
            float desconto = 0.0;

            printf("\nDeseja aplicar um desconto de 5%%? (S/N): ");
            scanf(" %c", &aplicar_desconto);

            if (aplicar_desconto == 'S' || aplicar_desconto == 's') {
                desconto = subtotal * 0.05;
            }

            float total_final = subtotal - desconto;

            // Nota fiscal
            printf("\n========================================\n");
            printf("              NOTA FISCAL\n");
            printf("========================================\n");
            for (int i = 0; i < total_itens; i++) {
                int idx = itens_pedidos[i];
                float preco_base = precos[idx] + (trios[i] ? 10.00 : 0.0);
                float total = preco_base * quantidades[i];
                printf("%d x %s %s - R$ %.2f\n", 
                    quantidades[i], 
                    nomes[idx], 
                    (trios[i] ? "(TRIO)" : ""), 
                    total);
            }

            printf("----------------------------------------\n");
            printf("Subtotal: R$ %.2f\n", subtotal);
            if (desconto > 0) {
                printf("Desconto (5%%): -R$ %.2f\n", desconto);
            } else {
                printf("Sem desconto aplicado.\n");
            }
            printf("TOTAL A PAGAR: R$ %.2f\n", total_final);
            printf("========================================\n");
            printf("Obrigado por visitar a Lanchonete do Ratao!\n");

            break; // Sai apos finalizar pedido
        }

    } while (opcao != 3);

    return 0;
}