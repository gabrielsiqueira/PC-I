#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//Números complexos podem ser escritos na forma cartesiana Z=x+iy ou na forma exponencial Z=re^(i*teta).
//Multiplicações e divisões de números complexos na forma exponencial ficam muito mais fáceis de serem feitas,
//pois assumem a seguinte forma: Z1*Z2 = r1^(i*teta1)*r2^(i*teta2) = (r1*r2)^(teta1+teta2),
//E Z1/Z2 = r1^(i*teta1)/r2^(i*teta2) = (r1/r2)^i*(teta1-teta2)
//bastando, portanto, operar os módulos (r1 e r2) e os argumentos (teta1 e teta2).
//Fazer um algoritmo que leia um conjunto de linhas, cada uma contendo um código de quatro valores.
//Código MULTIPLICA indica que se quer operar a multiplicação dos dois números complexos
//representados pelos quatro valores (r1,teta1,r2,teta2).
//Código DIVIDE indica que a completada, escrever todos os valores lidos e os valores obtidos.


int main(void)
{
    int r1, r2, teta1, teta2, flag[3];
    float r3, resultado;

    printf ("\n[1=MULTIPLICA|2=DIVIDE] e [0=VAZIO] para interromper.\n");
    //Coloquei as operações correspondente à números por não saber como incluir nomes ou characteres nas estruturas de repetições.
    printf ("Digite o codigo da acao que deseja realizar:\n");
    scanf ("%d", &flag);

    while(flag[0]!= 0)
    {
        if(flag[0] == 1)
        {
            printf("Digite um numero inteiro, o expoente ao qual ele sera elevado, outro inteiro e outro expoente:\n");
            scanf("%d %d %d %d", &r1, &teta1, &r2, &teta2);

            resultado = pow(r1*r2, (teta1+teta2));
            //Será ignorado o i correspondente ao número imaginário que é mostrado na fórmula do enunciado...
            //Justamente pelo o fato do enunciado não falar nada a respeito do mesmo.

            printf("\nValores obtidos: %d, %d, %d, %d", r1, teta1, r2, teta2);
            printf("\nResultado da operacao: %.1f.\n", resultado);

            printf("\nDigite o valor correspondente a proxima operacao:\n");
            scanf("%d", &flag);
        }
        if(flag[0]== 2)
        {
            printf("Digite um numero inteiro, o expoente ao qual ele sera elevado, outro inteiro e outro expoente:\n");
            scanf("%d %d %d %d", &r1, &teta1, &r2, &teta2);

            r3 = r1/r2;
            resultado = pow(r3, (teta1-teta2));
            //Aqui tá rolando um erro, não sei qual, mas está, que faz com que não mostre um resultado exato.

            printf("\nValores obtidos: %d, %d, %d, %d", r1, teta1, r2, teta2);
            printf("\nResultado da operacao: %.1f.\n", resultado);

            printf("\nDigite o valor correspondente a proxima operacao:\n");
            scanf("%d", &flag);
            
            else{
                printf ("Aprenda a ler.");
            }

        }
    }
}
