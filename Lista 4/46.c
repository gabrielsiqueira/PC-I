#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
    int x,y;
    x = 1;
    while(x!=0 && y != 0)
    {
        printf("Digite x e y, respectivamente: ");
        scanf("%d %d",&x,&y);
        if(x!=0 && y != 0)
        {
            if(x > 0)
            {
                if((y > (3*x)) || (y < (x/3)))
                {
                    printf("Exterior\n");
                }
                else
                {
                    printf("Interior\n");
                }
            }
            if(x < 0)
            {
                if((y > (x/3)) || (y < (3*x)))
                {
                    printf("Exterior\n");
                }
                else
                {
                    printf("Interior\n");
                }
            }
        }
        if(x+y == 0)
        {
            printf("Sessao finalizada");
        }
    }
}
