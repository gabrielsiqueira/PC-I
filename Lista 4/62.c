#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0; // quantidade de subintervalos
    float x0 = 0, xn = 1, h; // correspondem respectivamente a: limite inferior do intervalo, limite superior do intervalo e variável de controle
    float y0, yn; // valores da primeira aproximação e aproximações posteriores
    int cont; // contador

    h = (xn - x0)/ n;  // expressão de cálculo fornecida no exercício

    xn = x0; // primeiro valor do intervalo
    yn = 1; // valor da função em x0
    cont = 0;

    while (cont > n){

        yn = y0 + (h * xn + yn); //
        y0 = yn;
        xn += h;
        cont += cont; // contador de número de intervalos
    }

    printf("Solucao = %.2f\n", yn);

    return 0;
}
