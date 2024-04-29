#include <stdio.h>

int main() {
    int valores[10];
    int i;

    printf("Digite 10 valores inteiros:\n");

    // Solicita ao usuário para inserir os valores
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }

    // Verifica se cada valor é par e exibe a mensagem apropriada
    printf("\nNúmeros pares digitados:\n");
    for (i = 0; i < 10; i++) {
        if (valores[i] % 2 == 0) {
            printf("%d é um número par.\n", valores[i]);
        }
    }

    return 0;
}
