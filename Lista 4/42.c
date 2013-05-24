#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
  float x1, y1, x2, y2,d;
  x1 = 1;
  while(x1!=0 && x2!=0 && x3!=0 && x4!=0)
  {
    printf("Digite X1, Y1, X2 e Y2, respectivamente: ");
    scanf("%f %f %f %f",&x1,&y2,&x2,&y2);
    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    if(x1!=0 && x2!=0 && y1!=0 && y2!=0)
    {
      printf("A distancia entre os pontos e: %f",d);
    }
    else
    {
      printf("Programa finalizado.");
    }
  }
}
