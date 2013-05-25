#include <stdio.h>

int main( void )
{
	char turma = 'A', chamada;
	int i, totalTurma, ausentes = 0, turmas = 14, muitasFaltas = 0;

	while ( turmas-- )
	{
		scanf( "%*c %d", &totalTurma );

		for ( i = 0; i < totalTurma; ++i )
		{
			scanf( "%*d %c", &chamada );

			if ( chamada == 'A' )
				++ausentes;
		}

		ausentes = ausentes * 100 / totalTurma;

		if ( ausentes > 5 )
			++muitasFaltas;

		printf( "Turma %c: %d%% ausentes\n", turma++, ausentes );

		ausentes = 0;
		while (( chamada = getchar()) && chamada != '\n' );
	}

	printf( "Turmas com ausencia superior a 5%%: %d\n", muitasFaltas );

	return 0;
}
