#include <stdio.h>

int main( void )
{
	int i;		// ex: 3025

	// 10⁵ <= i < 10⁶
	for ( i = 1000; i < 10000; ++i )
		// (( 3025 / 100 ) + ( 3025 % 100))² == 3025
		// se ( 30 + 25 )² == i
		if (( i / 100 + i % 100 ) * ( i / 100 + i % 100 ) == i )
			printf( "%d\n", i);

	return 0;
}
