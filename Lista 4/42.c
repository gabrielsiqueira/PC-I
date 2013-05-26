#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
  float x1, y1, x2, y2,d;
  x1 = 1;
  while(x1+x2+y2+y1 != 0)
  {
    printf("Digite X1, Y1, X2 e Y2, respectivamente: ");
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    if(x1+x2+y2+y1 != 0)
    {
      printf("A distancia entre os pontos e: %f\n",d);
    }
    else
    {
      printf("Programa finalizado.");
    }
  }
}
