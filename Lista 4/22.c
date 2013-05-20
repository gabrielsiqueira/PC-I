#include<stdio.h>
int main()
{
  int x,y,a,b;
  float l;
  printf("Digite o lucro na venda do radio standart: ");
  scanf("%d",&x);
  printf("Digite o lucro na venda do radio luxo: ");
  scanf("%d",&y);
  if(x > (y/2))
  {
    l = 24*x + 16*(y/2);
    a = 24;
    b = 16;
    x = 24;
    y = 8;
  }
  else
  {
    if(x == (y/2))
    {
      l = 20*x + 20*(y/2);
      a = 20;
      b = a;
      x = 20;
      y = 10;
    }
    else
    {
      if(x < (y/2))
      {
        l = 8*x + 32*(y/2);
        a = 8;
        b = 32;
        x = 8;
        y = 16;
      }
    }
  }
  printf("O lucro maximo e: %.2f\nO numero de operarios na linha standart e: %d\nO numero de operarios na linhas luxo e: %d\nO numero de radios standart e: %d\nO numero de radios luxo e: %d",l,a,b,x,y);
}
