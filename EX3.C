#include <stdio.h>

int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("%c é uma vogal.\n", letra);
    } 
   
    else {
        printf("%c é uma consoante.\n", letra);
    }

    return 0;

}
