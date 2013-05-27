#include <stdio.h>
#include <math.h>

int main(){
    float carbono,dureza,resistencia;
    int i=1,namostra;
    while(i<=112){
        printf("Digite o conteudo de Carbono,a Dureza Rockwell e a Resistencia a tracao da amostra \n");
        scanf("%d",&namostra);
        scanf("%f%f%f",&carbono,&dureza,&resistencia);
        printf("Amostra %d\n",namostra);
        if(carbono<7&& dureza>50&& resistencia>80000){
            printf("ACO DE GRAU = 10\n");
        }
        else if(carbono<7&& dureza>50){
            printf("ACO DE GRAU = 9\n");
        }
        else if(carbono<7){
            printf("ACO DE GRAU = 8\n");
        }
        else{
           printf("ACO DE GRAU = 7\n");
        }
        i++;
    }

return 0;
}
