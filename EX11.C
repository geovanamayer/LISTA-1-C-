#include <stdio.h>


int main() {
    int anos = 0;
    int popA = 90000;
    int popB = 50000;

    while (popA >= popB) {
        popA += popA * 0.009; 
        popB += popB * 0.015; 
        anos++;
    }

    printf("Em %d anos, a populacao da cidade B sera maior que a da cidade A.\n", anos);

    return 0;

}
