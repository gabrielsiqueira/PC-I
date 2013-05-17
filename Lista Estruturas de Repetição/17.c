#include <stdio.h>

int main ()
{
  float lucro,preco,ingreco,maxl=0/*Lucro maximo*/,maxp=0/*Preço do ingresso quando o lucro é maximo.*/,maxi/*Numero de ingreços vendidos qnd o lucro é maximo.*/;
	ingreco=120;
	preco=5.00;
	do{
		lucro=(preco*ingreco)-200;
		if (lucro>maxl)//Testa todos os valores de lucro e deixa salvo em maxl,maxi e maxp apenas os valores do maior lucro, dos ingressos referentes a esse lucro e o preco dos ingressos para esse lucro,respectivamente.
		{
			maxl=lucro;
			maxi=ingreco;
			maxp=preco;
		}
		printf ("Lucro= %f, Lucro esperado= %f.\n",preco,lucro);
		preco-=0.5;
		ingreco+=26;
	}while(preco>=1);
	printf ("Lucro maximo= %f ao preco= %f vendendo %f ingressos.\n",maxl,maxp,maxi);
}
