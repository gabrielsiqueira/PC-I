#include <stdio.h>

int main(){
    int i;
    //double pois estava estourando o limite do int, float, long long
    double k=0.5;

    for(i=0;i<64;i++){
                //.lf para não imprimir as casas decimais
        printf("%.lf\n",(k*=2));
    }

    return 0;
}
