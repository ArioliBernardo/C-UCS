#include <stdio.h>
int main()
{
    int altura,largura,codigo;
    int areaTotal,volume,balde18,balde6,balde1,valorTotal;

    printf("Digite a altura, largura e o código('1' ou '2'): \n");
    scanf("%d %d %d", &altura, &largura, &codigo);

    areaTotal=altura*largura;
    printf("Área total a ser pintada: %d m2 \n",areaTotal);

    if(codigo == 1){
        printf("Estado da parede: RUIM \n");
        volume=areaTotal/3;
        printf("Volume requisitado: %d L\n",volume);
    }else if(codigo == 2){
        printf("Estado da parede: BOM \n");
        volume=areaTotal/5;
        printf("Volume requisitado: %d L\n",volume);
    }else
        printf("Valores inválidos");

    balde18=volume/18;
    balde6=(volume%18)/6;
    balde1=(volume%6);

    printf("Baldes de 18L: %d \n",balde18);
    printf("Baldes de 6L: %d \n",balde6);
    printf("Baldes de 1L: %d \n",balde1);

    valorTotal=balde18*145+balde6*51.90+balde1*9.50;
    printf("Valor total: R$ %d",valorTotal);

    return 0;
}