#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float raio, volume;
    for(raio=0;raio<=20;raio=raio+0.5){ //Contador de 0.5 em 0.5
        volume=(4/3)*(3.1415)*(pow(raio,3)); //Cálculo matemático descrito no exercício.
        printf("Para o raio %.2f, temos um volume de %.2f centimetros cubicos.\n", raio, volume);
    }
    return 0;
}
