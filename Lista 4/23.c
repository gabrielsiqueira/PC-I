#include <stdio.h>

int main( void )
{
// d, m, a = dia, mes, ano
// i, f = inicial, final
// ps: note a falta da var. 'df'. ela foi substituida por 'ans', para que o
// a variavel ja tenha como valor a quatidade de dias passados do inicio do
// mes final ; ou seja, ans = df.
int di, mi, ai, mf, af, i, ans;
int month[ 12 ] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
// vetor para representar os meses do ano, e seus respectivos dias

// le data inicial e data final
scanf( "%d %d %d %d %d %d", &di, &mi, &ai, &ans, &mf, &af );

// se o ano inicial < ano final
if ( ai < af )
{
// ans = dia final + ( ano final - ano inicial - 1 ) * 365 +
// nº dias do mes inicial - dia inicial
ans += ( af - ai - 1 ) * 365 + month[ mi - 1 ] - di;

// loop para calcular a diferença do mes seguinte ao mes inicial até o
// dia 31 de dezembro
for ( i = mi; i < 12; ++i )
ans += month[ i ];

// loop para calcular a diferença do dia 1 de janeiro até o mes
// anterior ao mes final
for ( i = 0; i < mf - 1; ++i )
ans += month[ i ];
}

// se o ano inicial == ano final
else
{
// se o mes inicial == mes final
if ( mi == mf )
ans -= di;  // ans = dia final - dia inicial
else
{
// ans = dia final + nº dias do mes inicial - dia inicial
ans += month[ mi - 1 ] - di;

// loop para somar à 'ans' o nº dias dos meses entre o mes inicial e
// o mes final
for ( i = mi; i < mf - 1; ++i )
ans += month[ i ];
}
}

// loop para adicionar um dia a cada ano bissexto no intervalo
// na inicialização desse for(), encontra-se os operadores ternários. são a
// mesma coisa que if ... else, só que menores. Ex:
// ( condiçao ? valor se positiva : valor se negativa )
// nos termos do exercicio:
// se mes inicial for menor que março, entao i = ano inicial
// senão, i = ano inicial + 1
// Regras para bissextos:
// de 400 em 400 anos é bissexto
// de 100 em 100 anos ñ é bissexto
// de 4 em 4 anos ñ é bissexto
// prevalecem as primeiras regras sobre as ultimas
for ( i = ( mi < 3 ? ai : ai + 1 ); i <= af; i++)
if ((!( i % 400 )) || ((!( i % 4 )) && ( i % 100 )))
{
++ans;	// add 1 dia se o ano for bissexto
i += 3;	// faz com que o laço passe a iterar de 4 em 4 anos
}	// assim que encontrar o 1º ano bissexto

printf( "TEMPO DECORRIDOS ENTRE AS DATAS E DE = %d\n", ans );

return 0;
}
