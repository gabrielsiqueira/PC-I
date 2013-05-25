#include <stdio.h>
int main ()
{
  int i,n;
  float total,preco,kw,max=0,min=99999999,soma=0,consumoR=0,consumoC=0,consumoI=0,media;
	char tipo[100];
	while(n!=0)
	{
		printf ("Digite o numero do consumidor:\n");
		scanf ("%d",&n);
		if (n==0)
		{
			break;
		}
		printf ("Digite o preco do Kwh e a quantidade consumida no mes:\n");
		scanf ("%f%f",&preco,&kw);
		printf ("Digite o tipo do consumidor(Residencial, Industrial, Comercial):\n");
		scanf ("%s",tipo);
		total=(preco*kw);
		printf ("Consumidor: %d\nToral a pagar: %f\n",n,total);
		if (kw>max)
		{
			max=kw;
		}
		else if (kw<min)
		{
			min=kw;
		}
		switch (tipo[0])
		{
			case 'R':
				loopR:
				consumoR+=kw;
				break;
			case 'I':
				loopI:
				consumoI+=kw;
				break;
			case 'C':
				loopC:
				consumoC+=kw;
				break;
			case 'r':
				goto loopR;
				break;
			case 'i':
				goto loopI;
				break;
			case 'c':
				goto loopC;
				break;
		}
		soma=soma+kw;
		i++;
	}
	if (i!=0)
	{
		media=soma/i;
	}
	else
	{
		media=0;
	}
	printf ("O maior consumo foi de: %f\n",max);
	printf ("O menor consumo foi de: %f\n",min);
	printf ("Total de consumo de:\nResidencial: %f\nIndustrial: %f\nComercial: %f\n",consumoR,consumoI,consumoC);
	printf ("A media de consumo foi de: %f",media);
}

