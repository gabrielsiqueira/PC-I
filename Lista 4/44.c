#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    float a,b,A;
    while(a+b != 0)
    {
        printf("Digite os valores de A e B, respectivamente: ");
        scanf("%f %f",&a,&b);
        if(a+b != 0)
        {
            if(a != 0)
            {
                A = (b*(-b/a))/2;
                if(A == -0)
                {
                    printf("Valor de A: %g\nValor de B: %g\nValor da area: 0\n",a,b);
                }
                else
                {
                    printf("Valor de A: %g\nValor de B: %g\nValor da area: %g\n",a,b,A);
                }
            }
            else
            {
                printf("Nao existe triangulo.\n");
            }
        }
        else
        {
            printf("Sessão finalizada.");
        }
    }
}
