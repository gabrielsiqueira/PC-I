#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  float a,b,c,d,x,y,u,v;
  while(a!=0 && b!=0 && c!=0 && d!=0)
  {
    printf("Digite os valores de a, b, c, d, u e v, respectivamente: ");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&d,&u,&v);
    if(((a*d) - (b*c)) == 0)
    {
      printf("Para:\na = %g\nb = %g\nc = %g\nd = %g\nu = %g\nv = %g\nNão existe x nem y, digite novamente.\n--------\n",a,b,c,d,u,v);
    }
    else
    {
      x = ((d/((a*d)-(b*c)))*u) - ((b/(a*d)(b*c))*v);
      y = ((-c/((a*d)-(b*c)))*u) - ((a/(a*d)(b*c))*v);
      printf("Para:\na = %g\nb = %g\nc = %g\nd = %g\nu = %g\nv = %g\n\nx = %g\ny = %g\n--------\n",a,b,c,d,u,v,x,y);
    }
  }
}
