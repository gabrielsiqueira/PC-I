#include <stdio.h>

int main( void )
{
	int tempo = 0, iMassaInicial;
	float massaInicial;

	scanf( "%f", &massaInicial );

	printf( "Massa inicial: %.2f\n", massaInicial );

	iMassaInicial = massaInicial * 10;

	while ( iMassaInicial >= 5 )
	{
		iMassaInicial >>= 1;
		tempo += 50;
	}

	printf( "Massa final: %.2f\nTempo: %d:%d:%d\n", iMassaInicial / 10.0,
			tempo / 3600, tempo % 3600 / 60, tempo % 60 );

	return 0;
}
