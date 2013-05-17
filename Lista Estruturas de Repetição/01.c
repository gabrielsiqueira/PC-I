#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    /*
	z= Armazena a soma das idades digitadas.
	y= Armazena o numero de idades digitadas.
	*/
    float y, z, idade;
	idade = 1;//Garante o loop infinito.
    z = 0;
    y = 0;
    while (idade != 0)
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
