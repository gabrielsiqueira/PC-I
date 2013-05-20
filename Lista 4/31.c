//azer um algoritmo para calcular e escrever o valor d número π com precisão de 0,0001, usando a série: 
//π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ... Para obter a precisão desejada, adicionar apenas os termos cujo valor 
//absoluto seja maior ou igual a 0.0001
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  float pi,impar;
  impar = 3;
  pi = 4;
  while(impar < 40000)
  {
    pi = pi - (4/impar);
    impar = impar + 2;
    pi = pi + (4/impar);
    impar = impar +2;
  }
  printf("%.4f",pi);
}
