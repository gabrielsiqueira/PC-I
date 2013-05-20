#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
  int n1,n2=50;
	float S=0,D,d;	
	for (n1=1;n1<51;n1++)
	{
	D=pow(2,n1);
	printf ("D=%f",D);
	d=n2;
	printf ("d=%f",d);
	S=S+(D/d);
	printf ("S=%f",S);
	n2--;
	}
	printf ("\nS=%f\n",S);
}
