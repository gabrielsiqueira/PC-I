#include <stdio.h>
#include <math.h>

int main ()
{
  /*D=Denominador.
	d=divisor.
	n1,n2= variaveis de incremento.*/
	float n1,n2=0,S=0,D,d;	
	for (n1=0;n1<100;n1+=2)
	{
	D=1+n1;
	d=1+n2;
	S=S+(D/d);
	n2++;
	}
	printf ("\nS=%f\n",S);
}
