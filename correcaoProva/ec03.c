#include <stdio.h>

int main(){
    
    int dig,b,c,d,e,f,g,h,i; // 0506273514
    printf("Digite um número de 10 digitos: \n");
    scanf("%d", &dig);

    b=dig/100000000;   // 0506273514/100000000 = '05',06273514
    c=dig%100000000;  // 06273514
  
    d=c/1000000;  // 06273514/1000000 = '06',273514
    e=c%1000000;  // 273514

    f=e/10000; // 273514/10000 = '27',3514
    g=e%10000; // 3514

    h=g/100;  // 3514/100 = '35',14  (minutos)
    i=g%100;  // 14 (horas)

    printf("Horário em que a compra ocorreu: %d:%d",i,h);

    return 0;
}

/* ERRO DA PROVA
int main(){
    
    int dig,b,c,d,e,f,g,h,i; // 0506273514
    printf("Digite um número de 10 digitos: \n");
    scanf("%d", &dig);

    b=dig/100;   // 0506273514/100 = '05062735',14
    c=b%100;    // 05062735%100 = 35

    return 0;
} */