#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    float C,F;
    F = 50;//Temperatura inicial em farenheits.
    while(F<151)
    {
        C = (5*(F-32))/9;//Calculo da temperatura em graus celcius.
        printf("Valor de F = %1.f Valor de C = %.2f\n",F,C);
        F = F + 1;//Aumento de 1grau farenheits por volta do loop.
    }
}
