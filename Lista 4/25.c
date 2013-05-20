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
	d=n2;
	S=S+(D/d);
	n2--;
	}
	printf ("\nS=%f\n",S);
}
