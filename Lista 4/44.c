#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
  float a,b,A;
  while(a!=0 && b!=0)
  {
    printf("Digite os valores de A e B, respectivamente: ");
    scanf("%f %f",&a,&b);
    if(a!=0 && b!=0)
    {
      A = (b*(-b/a))/2;
      printf("Valor de A: %g\nValor de B: %g\nValor da area: %g",a,b,A);
    }
    else
    {
      printf("Sessão finalizada.")
    }
  }
}
