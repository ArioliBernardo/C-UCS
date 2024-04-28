#include <stdio.h>

int main(){

    int soma,i;
        // (inicialização;condição;incremento)
    for ( soma=0 , i=0 ; i<10 ; i++ ){
    soma=soma+i;
    printf("soma = %d \n",soma);
    }
}

// EXERCÍCIO 1 - LISTA DO COMANDO FOR 

#include <stdio.h>

int main(){
     
     int soma,x;

     for( soma = 1, x = 1; x <= 20; x++){
        printf("%d \n",soma);
        soma=soma+1;
     }
    return 0;
}