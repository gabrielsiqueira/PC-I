#include <stdio.h>
#include <math.h>

int main(){
    float i;
    int d,c;

    printf("Digite os valores de C: coeficiente de rugosidade;D: diametro de tubo (m2).\n");
    scanf("%d %d",&c,&d);

    while(d!=0){

  	printf("Perda de Carga |Vazão\t|Rugosidade |Diametro\n");
        for(i=0.1;i<=10.01;i+=0.1){
            printf("%.2f\t\t%.2f\t\t%d\t%d\n",(pow(i,1.85)*10.643*pow(d,4.87)*pow(c,-1.85)),i,d,c);
        }
        printf("Digite os valores de C: coeficiente de rugosidade;D: diametro de tubo (m2).\n");
        scanf("%d %d",&c,&d);
    }

return 0;
}
