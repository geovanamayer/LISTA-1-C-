#include <stdio.h>

int main() {
    
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d é um número par.\n", num);
    } 
    
    else {
        printf("%d é um número ímpar.\n", num);
    }
    
    return 0;

}
