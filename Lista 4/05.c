#include <stdlib.h>
#include <stdio.h>

int main(){
    int popA, popB, anos=0;
    printf("digite o numero de pessoas no pais A: \n");
    scanf("%d", &popA);
    printf("digite o numero de pessoas no pais B: \n");
    scanf("%d", &popB);
    while(popA<popB){
        popA=popA*1.03;
        popB=popB*1.015;
        anos++;
    }
    printf("o pais A levara %d anos para igualar ou superar sua populacao a do pais B. \n", anos);
return 0;

}
