#include <stdio.h>

int main ()
{
int k=0,i,o=0;
float h,soma=0,max=0,min=1000,media;
char sexo[10];
for(i=0;i<50;i++)
{
printf ("Digite a altura e o sexo da pessoa.(M-masculino F-feminino)\n");
scanf ("%s",sexo);
scanf ("%f",&h);
if (h>max)
{
max=h;
}
else if (h<min)
{
min=h;
}


if (sexo[0]=='f' || sexo[0]=='F')
{
soma=soma+h;
k++;
}
else
{
if (sexo[0]=='m' || sexo[0]=='M')
{
o++;
}
else
{
printf ("Sexo Digitado e invalido.\n");
}
}
}
media=soma/k;
printf ("Maior altura = %f\nMenor altura = %f\nMedia = %f\nNumero de homens = %d\n",max,min,media,o);
}
