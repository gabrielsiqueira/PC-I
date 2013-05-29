#include <stdio.h>
#include <stdlib.h>

main ()
{
    float cont=37, op, op1=37, op2=38, op3=1, total=0;
    while (cont>=1)
    {
        op=(op1*op2)/op3;
        //Aqui, obtemos o total de cada operação dentro da cadeia de repetições, e somamos a um total, que é a soma desejada.
        total+=op;
        cont--;
        //op1 -> Primeiro número da multiplicação. Com valor inicial 37, diminui de 1 em 1.
        op1--;
        //op1 -> Segundo número da multiplicação. Com valor inicial 38, diminui de 1 em 1.
        op2--;
        //op1 -> Divisor. Com valor inicial 1, aumenta de 1 em 1.
        op3++;
    }
    printf ("Soma = %.3f", total);
    return 0;
}
