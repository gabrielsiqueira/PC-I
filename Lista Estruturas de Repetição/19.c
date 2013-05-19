#include <stdio.h>

int main( void )
{
	char numInsc[ 9 ];			// vetor para o n� de inscri��o
	int empregados, salarioBruto, tvCor, tvPB;
	float salarioLiquido;

	scanf( "%d", &empregados );

	// operadores de incremento e decremento: ++ e --
	// podem ser prefixados ou sufixados: ++x ou x++
	// existe uma diferen�a entre o prefixo e o sufixo, exceto
	// quando s�o usados no loop for(), que � distingue um do outro.
	// no caso dos outros loops, quando o operador � prefixo ( --x ),
	// o numero � primeiro decrementado, logo depois � verificado se
	// a condi��o � V ou F. Quando o operador � sufixo ( x-- ), a
	// condi��o do la�o � verificada antes, e s� depois o numero �
	// decrementado, ou incrementado, no caso de x++.
	while ( empregados-- )
	{
		scanf( "%s %d %d %d", numInsc, &salarioBruto, &tvCor, &tvPB );

		// comissao pelo numero de tv's a cor vendidas
		if ( tvCor < 10 )
			salarioBruto += tvCor * 5;
		else
			salarioBruto += tvCor * 50;

		// comissao pelo numero de tv's P/B vendidas
		if ( tvPB < 20 )
			salarioBruto += tvPB * 2;
		else
			salarioBruto += tvPB *20;

		// salario liquido = salario bruto - 8%
		salarioLiquido = salarioBruto * .92;

		if ( salarioBruto >= 500 )
			salarioLiquido *= .85;	// salario liquido = salario liquido - 15%

		printf( "NUMERO DE INCRISCAO = %s\nSALARIO BRUTO = %d.00\nSALARIO "
				"LIQUIDO = %.2f\n", numInsc, salarioBruto, salarioLiquido );
	}

	return 0;
}