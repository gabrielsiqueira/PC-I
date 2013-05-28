#include <stdio.h>
#include <stdlib.h>

int main()

{
  int num ,i ,soma;

    for (num = 1; num <= 100; num++)
    {
        for (soma = 0, i = 1; i < num; i++)
    {

        if (num % i == 0)
        soma += i;
    }

            if (soma == num)
            printf("Numero perfeito: %d\n",num);
    }

    return 0;
}
