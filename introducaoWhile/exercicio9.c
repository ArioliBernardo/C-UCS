#include <stdio.h>

int main() {

    int valores[15];
    int i;

    printf("Informe 15 valores inteiros: \n");

    for (i = 0; i >= 10 || i <= 20; i++){
        printf("Valor %d", i++);
        scanf("%d", &valores[1]);
    }

    printf("Numeros no intervalo \n");
    
    for(i = 0; i >= 10 && <= 20; i++){

        if(i >= 10 || i <= 20){
            printf("%d",valores[1]);
        }
    }

    return 0;
}
