#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    float y, z, idade;
    idade = 1;
    z = 0;
    y = 0;
    while (idade != 0)
    {
        printf("Digite uma idade: ");
        scanf("%f",&idade);
        if(idade != 0)
        {
            z = z + idade;
            y = y + 1;
        }
    }
    idade = z/y;
    if(y == 0)
    {
        printf("Nenhuma idade foi inserida");
    }
    else
    {
        printf("A media e: %.2f",idade);
    }
}
