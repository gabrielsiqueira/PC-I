#include <stdio.h>

int main( void )
{
	//	max1 = Lucro maximo
	//	maxp = Preço do ingresso quando o lucro é maximo
	//	maxi = Numero de ingreços vendidos qnd o lucro é maximo
	float lucro, preco = 5.0, ingresso = 120.0, maxl = .0, maxp = .0, maxi;

	do
	{
		lucro = preco * ingresso - 200;

	// Testa todos os valores de lucro e deixa salvo em maxl,maxi e maxp apenas 
	// os valores do maior lucro, dos ingressos referentes a esse lucro e o preco
	// dos ingressos para esse lucro,respectivamente.
	if ( lucro > maxl )
		{
			maxl = lucro;
			maxi = ingresso;
			maxp = preco;
		}

		printf( "Lucro= %f, Lucro esperado= %f.\n", preco, lucro );

		preco -= 0.5;
		ingresso += 26.0;
	} while ( preco >= 1.0 );

	printf( "Lucro maximo= %f ao preco= %f vendendo %f ingressos.\n", maxl, maxp, maxi );
}
