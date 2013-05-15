#include<stdio.h>

int main()
{
    int x,u,d,c,um,y,z;
    x = 1;
    while(x<10001)
    {
        if(x<10)
        {
            z = sqrt(x);
            z = z*z;
            if(x==z)
            {
                printf("Palíndromo e cubo perfeito %d\n",x);
            }
        }
        if(x>9 && x<100)
        {
            z = sqrt(x);
            z = z*z;
            um = x/10;
            y = x%10;
            y = y*10+um;
            if(x==z && x==y)
            {
                printf("Palíndromo e cubo perfeito %d\n",x);
            }
        }
        if(x>99 && x<1000)
        {
            z = sqrt(x);
            z = z*z;
            c = x/100;
            y = x%100;
            um = y/10;
            y = y%10;
            y = y*100+um*10+c;
            if(x==z && x==y)
            {
                printf("Palíndromo e cubo perfeito %d\n",x);
            }
        }
        if(x>999 && x<=10000)
        {
            z = sqrt(x);
            z = z*z;
            d = x/1000;
            y = x%1000;
            c = y/100;
            y = y%100;
            um = y/10;
            y = y%10;
            y = y*1000+um*100+c*10+d;
            if(x==z && x==y)
            {
                printf("Palíndromo e cubo perfeito %d\n",x);
            }
        }
        x = x + 1;
    }
}
