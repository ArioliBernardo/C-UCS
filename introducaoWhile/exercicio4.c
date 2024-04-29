#include <stdio.h>

int main() {
    
    printf("Numeros impares: \n");

    int i;

    for(i=0;i <= 200; i++){

        if(i % 2 == 1){
            printf("%d \n", i);
        }
    }

    return 0;

}