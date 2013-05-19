#include <stdio.h>

int main( void )
{
    // z = Armazena a soma das idades digitadas.
	// y = Armazena o numero de idades digitadas.
	float y = 0, z = 0, idade = 1;		// idade = 1 garante o loop infinito.

    while ( idade != 0 )
    {
        printf("Digite uma idade ou 0 para terminar: ");
        scanf("%f",&idade);
        //Verifica quando vai ter que parar o loop.
		if(idade != 0)
        {
            z = z + idade;
            y = y + 1;
        }
    }
    idade = z/y;
    //Avisa caso nenhuma idade tenha sido inserida.
    if(y == 0)
    {
        printf("Nenhuma idade foi inserida");
    }
    else
    {
        printf("A media e: %f",idade);
    }
}
