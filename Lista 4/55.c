#include <stdio.h>
#include <math.h>

/*  1.12.55. Dada a equação x
3
- 3x
2
+ 1 = 0 , pode-se encontrar qualquer uma de su
as raízes
reais através de aproximações sucessivas utilizando
a seguinte fórmula:
             
             Erro!
             
Fazer um algoritmo que:
•
considere como primeira aproximação X = 1,5;
•
calcule e escreva a trigésima aproximação da raiz */

int main (void) {

    int i=0;

    float xa=1.5, xb, y;

    printf("Digite uma raiz: ");
    scanf("%f", &xb);



    for(i; i < 0; i++) {

            xb = xa - ((pow(xa,3))- 3 * (pow(xa,2)+1)/((3*pow(xa,2))-6*xa));
            xa = xb;




    }

    printf("A trigesima aproximacao e %f", xb);

    y = pow(xb,3) - 3*pow(xb,2) + 1;

    printf("\no valor da funcao e: %f", y);







    return 0;
    
    // usei a formula Erro! kkkkkk'
}
