#include <stdio.h>

int main( void )
{
    int di, mi, ai, df, mf, af, i, ans;	
	// d, m, a = dia, mes, ano
	// i, f = inicial, final

	scanf( "%d %d %d %d %d %d", &di, &mi, &ai, &df, &mf, &af );

	int months[12];
	months[0] = months[2] = months[4] = months[6] = months[7] = months[9] = months[11] = 31;
	months[1] = 28;
	months[3] = months[5] = months[8] = months[10] = 30;

	ans = (af - (ai + 1)) * 365 + months[mi-1] - di + df;

	for ( i = 0; i < mf-1; i++)
		ans += months[i];

	for ( i = mi; i < 12; i++)
		ans += months[i];

	for ( i = ( mi < 2 ? ai : ai + 1 ); i <= af; i++)
		if ((!(i % 400)) || ((!(i % 4)) && (i % 100)))
		{
			++ans;
			i += 3;
		}

	printf( "TEMPO DECORRIDOS ENTRE AS DATAS E DE = %d\n", ans );
}
