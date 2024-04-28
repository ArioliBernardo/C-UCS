/* #include <stdio.h>

int main(){

int i=1;
do {
printf("%d\n",i);
i=i+1;
} while (i<=10);

return 0;
}

#include <stdio.h>

int main(){

int i=1;
do {
i=i+1;
printf("%d\n",i);
} while (i<=10);

return 0;
}
*/
// EXERCÍCIO 1 - LISTA DO COMANDO WHILE E DO-WHILE

#include <stdio.h>

int main() {
    int numero, menor;

    printf("Digite uma sequencia de numeros inteiros (digite 0 para parar):\n");

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        // Verifica se o número é positivo e se é o primeiro número positivo ou menor que o menor encontrado até agora
        if (numero > 0 && (menor > numero || menor == 0)) {
            menor = numero;
        }

    } while (numero != 0);

    // Se nenhum número positivo foi digitado, o menor continua sendo 0
    if (menor == 0) {
        printf("Nenhum numero positivo foi digitado.\n");
    } else {
        printf("O menor numero positivo digitado foi: %d\n", menor);
    }

    return 0;
}

