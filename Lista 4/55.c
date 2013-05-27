#include <stdio.h>
#include <math.h>

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
}
