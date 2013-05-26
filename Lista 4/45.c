#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    float x,y;
    x = 1;
    while(x < 11)
    {
        if(x < 4)
        {
            printf("x = %.1f | y = 1\n",x);
        }
        else
        {
            if(x == 4)
            {
                printf("x = %.1f | y = 32\n",x);
            }
            else
            {
                if(x > 4)
                {
                    y = (pow(x,2)) - 16;
                    printf("x = %.1f | y = %.1f\n",x,y);
                }
            }
        }
        x = x + 1;
    }
}
