#include <stdio.h>

int main(){

    int x1,y1,x2,y2,x3,y3,x4,y4;
    int d1,d2,d3,d4;

   printf("Informe a primeira coordenada: \n");
   scanf("%d %d", &x1, &y1);

   printf("Informe a segunda coordenada: \n");
   scanf("%d %d", &x2, &y2);

   printf("Informe a terceira coordenada: \n");
   scanf("%d %d", &x3, &y3);

   printf("Informe a quarta coordenada: \n");
   scanf("%d %d", &x4, &y4);

    d1= sqrt ( pow((x2-x1),2) + pow((y2-y1),2) );      // pontos 3,1 e 3,6

    d2 = sqrt ( pow((x3-x2),2) + pow((y3-y2),2) );    // pontos 3,6 e 8,6
 
    d3 = sqrt ( pow((x4-x3),2) + pow((y4-y3),2) );   // pontos 8,6 e 8,1

    d4 = sqrt ( pow((x4-x1),2) + pow((y4-y1),2) );  // pontos 8,1 e 3,1
  
    if(d1 == d2 &&  d2 == d3 && d3 == d4){
        printf("Os pontos formam um quadrado");
    }else{
        printf("Os pontos não formam um quadrado");
    }


    return 0;
}