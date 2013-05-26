#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
  float x,y;
  x = 1;
  while(x+y != 0)
  {
    printf("Digite x e y, respectivamente: ");
    scanf("%f &f",&x,&y);
    if(x+y != 0)
    {
      if((x > 0)
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
        if((y > (x/3)) || (y > (3*x)))
        {
          printf("Exterior\n");
        }
        else
        {
          printf("Interior\n");
        }
      }
    }
  }
