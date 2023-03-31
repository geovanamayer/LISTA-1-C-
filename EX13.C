#include <stdio.h>


int main() {

    float preco, total = 0, desconto, valor_pago, valor_a_pagar;
    int quantidade = 0, opcao_pagamento, total_itens_vendidos = 0;

    do {
        printf("Informe o preco do produto (ou 0 para finalizar): ");
        scanf("%f", &preco);

        if (preco > 0) {
            printf("Informe a quantidade comprada: ");
            scanf("%d", &quantidade);

            total += preco * quantidade;
            total_itens_vendidos += quantidade;
        }
    }
    
     while (preco > 0);

    printf("Total de itens vendidos no dia: %d\n", total_itens_vendidos);
    printf("Total das vendas no dia: R$ %.2f (sem descontos)\n", total);

    if (total > 0) {
        printf("\nSelecione a opcao de pagamento:\n");
        printf("1. Dinheiro\n");
        printf("2. Cartao debito\n");
        printf("3. Cartao credito\n");
        scanf("%d", &opcao_pagamento);

        switch (opcao_pagamento) {
    
            case 1:
                desconto = total * 0.1;
                valor_a_pagar = total - desconto;
                printf("Opcao de pagamento selecionada: Dinheiro\n");
                printf("Percentual de desconto: 10%%\n");
                printf("Desconto obtido: R$ %.2f\n", desconto);
                printf("Total a pagar: R$ %.2f\n", valor_a_pagar);
                break;
    
            case 2:
                desconto = total * 0.05;
                valor_a_pagar = total - desconto;
                printf("Opcao de pagamento selecionada: Cartao debito\n");
                printf("Percentual de desconto: 5%%\n");
                printf("Desconto obtido: R$ %.2f\n", desconto);
                printf("Total a pagar: R$ %.2f\n", valor_a_pagar);
                break;
    
            case 3:
                valor_a_pagar = total;
                printf("Opcao de pagamento selecionada: Cartao credito\n");
                printf("Total a pagar: R$ %.2f\n", valor_a_pagar);
                break;
    
            default:
                printf("Opcao de pagamento invalida\n");
        }
    }

    return 0;

}
