#include <stdio.h>
#include <math.h>

int main (voi) {

    float f, x, y, d;

    for(x=1; x < 10; x++){

        for(y=1; y < 5; y++){

            d = x*y - 5*y + 15;

            if (d > 0){

                    f = (pow(x,2) + 3 * x + pow(y,2)) / d;

                    printf("\nx = %f", x, " y = %f", y, " f(x,y) = %f", f);


            }

            else printf("\nDenominador nulo para x = %f", x, " e y = %f", y);

        }

    }






    return 0;
}
