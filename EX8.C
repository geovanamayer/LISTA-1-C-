#include <stdio.h>


int main() {
    float polegadas, cm;
    int i, inicio, fim;

    printf("Digite o intervalo em polegadas:\n");

    printf("Inicio: ");
    scanf("%d", &inicio);

    printf("Fim: ");
    scanf("%d", &fim);

    printf("\nPolegadas   Centimetros\n");

    for (i = inicio; i <= fim; i++) {
        polegadas = i;
        cm = polegadas * 2.54;
        printf("%-12.1f%.1f\n", polegadas, cm);
    }

    return 0;

}
