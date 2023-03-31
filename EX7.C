#include <stdio.h>


int main() {
    int i, num;
    float media = 0.0;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %do numero: ", i);
        scanf("%d", &num);

        printf("Metade do %do numero: %.1f\n", i, num / 2.0);

        media += num;
    }

    media /= 10;

    printf("Media dos numeros lidos: %.1f\n", media);

    return 0;

}
