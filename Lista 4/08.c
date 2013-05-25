#include <stdio.h>

int main( void )
{
	char op, sexo;
	int sim = 0, male = 0, pessoas = 2000;
	float malePC;

	while ( pessoas-- )
	{
		scanf( "%c %c", &op, &sexo );

		if ( op == 's' )
			++sim;

		if ( sexo == 'm' )
			++male;

		while (( op = getchar()) && op != '\n' );
	}

	malePC = male / 20;

	printf( "Sim: %d\nNao: %d\n%% Homens: %.1f\n%% Mulheres: %.1f\n", sim,
			2000 - sim, malePC, 100.0 - malePC );

	return 0;
}
