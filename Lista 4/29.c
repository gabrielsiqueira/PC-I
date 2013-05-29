//Mesmo raciocínio da questão 28, com valores diferentes.

#include <stdio.h>
#include <stdlib.h>

main ()
{
   int cont=30;
   float op1=480;
   float op2=10;
   int q;
   float total=0, op;
   while (cont>0)
   {
       q=op2;
       op=op1/op2;
       if (q%2==1)
       {
           total-=op;
           cont--;
           op1-=5;
           op2++;
       }
       if (q%2==0)
       {
           total+=op;
           cont--;
           op1-=5;
           op2++;
       }
   }
   printf ("S = %f", total);
   return 0;
}
