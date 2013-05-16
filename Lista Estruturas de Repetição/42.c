#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,d;
    while(x1!=0 && y1!=0 && x2!=0 && y2!=0)
    {
        printf("Digite X1 e Y1, X2 e Y2, respectivamente: ");
        scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
        d = sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
        if(x1!=0 && y1!=0 && x2!=0 && y2!=0)
        {
            printf("Aa distancia é: %.2f\n",d);
        }
        else
        {
            printf("Sessao finalizada");
        }
    }
}
