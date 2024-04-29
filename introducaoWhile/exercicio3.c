#include <stdio.h>

int main() {
    printf("Números pares de 1 a 50:\n");
    
    // Loop de 1 a 50
    for (int i = 1; i <= 50; i++) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            printf("%d\n", i); // Imprime o número par
        }
    }
    
    return 0;
}