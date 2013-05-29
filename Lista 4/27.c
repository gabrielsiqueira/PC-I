#include <stdio.h>
#include <stdlib.h>

main ()
{
   //Com base no dividendo, de valor inicial 1, temos que a sequência, é composta de 10 operações. 
   int cont=10;
   //op1 -> Aumenta de 1 em 1. Dividendo de cada operação.
   float op1=1;
   //op2 -> Possui valor de op1 elevado ao quadrado. Divisor de cada operação. 
   float op2=1;
   //op -> A operação de divisão em si.
   //total -> Soma de todas as operações realizadas na repetição.
   float total=0, op;
   while (cont>0)
   {
       op2=op1*op1;
       op=op1/op2;
       //Temos op negativo, toda vez que op1 é par, ou seja, subtraimos a operação do total.
       if (op1==2 || op1==4 || op1==6 || op1==8 || op1==10)
       {
           total-=op;
           cont--;
           op1++;
       }
       //Para op1 ímpar.
       else
       {
           total+=op;
           cont--;
           op1++;
       }
   }
   printf ("S = %f", total);
   return 0;
}
