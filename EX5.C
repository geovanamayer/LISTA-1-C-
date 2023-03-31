#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
   
    char situacao_civil[20];
    printf("Informe sua situacao civil (solteiro, casado, divorciado ou viuvo): ");
    scanf("%s", situacao_civil);

    if (strcmp(situacao_civil, "solteiro") == 0) {
        int idade;
        printf("Informe sua idade: ");
        scanf("%d", &idade);
        printf("Voce tem %d anos e eh solteiro(a).\n", idade);
    }
    
    else if (strcmp(situacao_civil, "casado") == 0) {
        char sexo[10], nome_conjuge[50];
        printf("Informe seu sexo (masculino ou feminino): ");
        scanf("%s", sexo);
        printf("Informe o nome do seu conjuge: ");
        scanf("%s", nome_conjuge);
        printf("Voce eh casado(a) com %s e seu conjuge eh %s.\n", nome_conjuge, sexo);
    }
    
    else if (strcmp(situacao_civil, "divorciado") == 0) {
        int num_filhos, idade_mais_velho;
        printf("Informe a quantidade de filhos: ");
        scanf("%d", &num_filhos);
        if (num_filhos > 0) {
            printf("Informe a idade do mais velho: ");
            scanf("%d", &idade_mais_velho);
        }
    
        else {
            idade_mais_velho = 0;
        }
        printf("Voce eh divorciado(a) com %d filho(s) e o mais velho tem %d ano(s).\n", num_filhos, idade_mais_velho);
    }
    
    else if (strcmp(situacao_civil, "viuvo") == 0) {
        char cidade[50];
        float salario_atual;
        printf("Informe a cidade onde vive: ");
        scanf("%s", cidade);
        printf("Informe seu salario atual: ");
        scanf("%f", &salario_atual);
        printf("Voce eh viuvo(a), mora em %s e seu salario atual eh R$ %.2f.\n", cidade, salario_atual);
    }
    
    else {
        printf("Situacao civil invalida.\n");
        return 1;
    }

    return 0;

}
