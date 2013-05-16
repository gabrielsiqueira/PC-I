#include<stdio.h>
int main()
{
  int x,y,a,b;
  float l;
  printf("Digite o lucro na venda do rário standart: ");
  scanf("%d",&x);
  printf("Digite o lucro na venda do rádio luxo: ");
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
  printf("O lúcro máximo é: %.2f\nO número de operários na linha standart é: %d\nO número de operários na linhas luxo é: %d\nO numero de radios standart é: %d\nO numero de radios luxo é: %d",l,a,b,x,y);
}
