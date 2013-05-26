#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    double raio, area;
    int lados;
    printf("Digite o raio da circunferencia em cm:\n");
    scanf("%lf", &raio);
    printf("Digite o numero de lados do poligono:\n");
    scanf("%d", &lados);
    if(lados>=3){ //Condição da existência do polígono
        area=(pow(raio,2)*(lados)*(sin((360/lados)*((3.1415)/180))))/2; //R²L*sin(360/L)/2 - Seno foi convertido para radianos.
        printf("A area do poligono e %.2lfcm.\n", area);
    }else{
        printf("Um poligono deve possuir 3 lados ou mais.\n");
    }
    return 0;
}
