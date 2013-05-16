#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
    int anos=0;
    float pop1, pop2;
    printf("Digite a populacao do pais A:\n");
    scanf("%f", &pop1);
    printf("Digite a populacao do pais B:\n");
    scanf("%f", &pop2);
    if(pop2>pop1){
            while(pop1<=pop2){
            pop1=pop1*1.03;
            pop2=pop2*1.015;
            anos++;
            }
    }else if(pop1==pop2){
        printf("A populacao B ja e igual a populacao A.\n");
    }else{
        printf("A populacao B nunca alcancara a populacao A.\n");
    }
    if(pop1>=pop2&&anos>=1){
        printf("A populacao B alcancara a populacao A em %d anos.\n", anos);
    }
    return 0;
}
