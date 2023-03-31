#include <stdio.h>

int main() {
    
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num > 0) {
        printf("%d é um número positivo.\n", num);
    }
    
     else if (num < 0) {
        printf("%d é um número negativo.\n", num);
    } 
    
    else {
        printf("%d é igual a zero.\n", num);
    }

    return 0;

}
