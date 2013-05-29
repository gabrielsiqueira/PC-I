#include <stdio.h>
#include <stdlib.h>

main ()
{
   //Contamos 50 repetições.
   int cont=50;
   //op1 -> Dividendo de cada operação. Com valor inicial 1000, diminui de 3 em 3.
   float op1=1000;
   //op2 -> Divisor da operação. Aumenta de 1 em 1.
   float op2=1;
   //q -> Representa o valor inteiro de op2. Utilizado para a obtenção de valores pares, no caso abaixo.
   int q;
   //total -> Soma de todas as operações.
   //op -> O valor de cada operação op1/op2.
   float total=0, op;
   while (cont>0)
   {
       q=op2;
       op=op1/op2;
       //Com q (op2) par, op é negativo, e consequentemente, subtraimos seu valor do total.
       if (q%2==0)
       {
           total-=op;
           cont--;
           op1-=3;
           op2++;
       }
       //Com q ímpar, somamos o valor ao total.
       if (q%2==1)
       {
           total+=op;
           cont--;
           op1-=3;
           op2++;
       }
   }
   printf ("S = %f", total);
   return 0;
}
