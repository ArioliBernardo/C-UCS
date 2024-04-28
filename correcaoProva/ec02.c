#include <stdio.h>
int main() {
    
    int hora1,minuto1;
    int hora2,minuto2;
    int hora3,minuto3;
    int minutagem1,minutagem2,minutagem3;

    printf("Digite o horário do primeiro cliente (hora e minuto separados por espaço): ");
    scanf("%d %d", &hora1, &minuto1);

    printf("Digite o horário do segundo cliente (hora e minuto separados por espaço): ");
    scanf("%d %d", &hora2, &minuto2);

    printf("Digite o horário do terceiro cliente (hora e minuto separados por espaço): ");
    scanf("%d %d", &hora3, &minuto3);

    minutagem1=hora1*60+minuto1;
    minutagem2=hora2*60+minuto1;
    minutagem3=hora3*60+minuto1;

    if(minutagem1 < minutagem2 && minutagem2 < minutagem3){
        printf("Menor horario: %d:%d",hora1,minuto1);
    }else if(minutagem2 > minutagem1 && minutagem1 < minutagem3){
        printf("Menor horário: %d:%d",hora2,minuto2);
    }else{
        printf("Menor horário: %d:%d",hora3,minuto3);
    }

    return 0;
}
