#include <stdio.h>

int main ()
{
/*
k= Numero de mulhers.
o= Numero de homens.
h= Altura.
soma= Soma das alturas das mulheres.
max= Maior altura.
min= Menor altura.
media= Media das alturas.
*/
int k=0,i,o=0;
float h,soma=0,max=0,min=1000,media;
char sexo[10];
for(i=0;i<50;i++)
{
printf ("Digite a altura e o sexo da pessoa.(M-masculino F-feminino)\n");
scanf ("%f",&h);
scanf ("%s",sexo);
if (h>max)//Testa todas as alturas digitadas e salva apenas a maior de todas.
{
max=h;
}
else if (h<min)//Testa todas as alturas digitadas menores que o max e salva apenas a menor de todas.
{
min=h;
}


if (sexo[0]=='f' || sexo[0]=='F')//if para somar apenas a altura das mulheres e contar quantas mulheres foram digitadas.
{
soma=soma+h;
k++;
}
else
{
if (sexo[0]=='m' || sexo[0]=='M')//if para contar quantos homens fora digitados.
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
