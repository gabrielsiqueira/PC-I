#include <stdio.h>

int main( void )
{
	char numInsc[ 9 ];			// vetor para o nº de inscrição
	int empregados, salarioBruto, tvCor, tvPB;
	float salarioLiquido;

	scanf( "%d", &empregados );

	// operadores de incremento e decremento: ++ e --
	// podem ser prefixados ou sufixados: ++x ou x++
	// existe uma diferença entre o prefixo e o sufixo, exceto
	// quando são usados no loop for(), que ñ distingue um do outro.
	// no caso dos outros loops, quando o operador é prefixo ( --x ),
	// o numero é primeiro decrementado, logo depois é verificado se
	// a condição é V ou F. Quando o operador é sufixo ( x-- ), a
	// condição do laço é verificada antes, e só depois o numero é
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