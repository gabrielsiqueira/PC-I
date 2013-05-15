#include <stdio.h>

int main ()
{
  char sexo[10],resposta[10];
	int i,rs=0,fs=0,rn=0,mn=0,fn=0,ms=0;
	float perM,perF;	
	for(i=0;i<2000;i++)
	{
	printf ("Digite o sexo e a resposta do entrevistado:\n");
	scanf ("%s",sexo);
	scanf ("%s",resposta);
	if (resposta[0]=='S' || resposta[0]=='s')
	{
		rs++;//Respostas sim.
		if (sexo[0]=='F' || sexo[0]=='f')
		{
			
			fs++;//Mulheres que responderam sim.
		}
		else if (sexo[0]='M' || sexo[0]=='m')
		{
			ms++;//Homens que responderam sim.
		}
	}
	else if (resposta [0]=='N' || resposta[0]=='n')
	{
		rn++;//Respostas não.
		if (sexo[0]=='F' || sexo[0]=='f')
		{
			
			fn++;//Mulheres que responderam não.
		}
		else if (sexo[0]='M' || sexo[0]=='m')
		{
			mn++;//Homens que responderam não.
		}
	}
	}
	
	perM=(mn*100)/(ms+mn);
	perF=(fs*100)/(fs+fn);
	printf ("  %d pessoas responderam sim!\n",rs);
	printf ("  %d pessoas responderam nao!\n",rn);
	printf ("A percentagem de mulheres que responderam sim foi de: %f!\n",perF);
	printf ("A percentagem de homens que responderam nao foi de: %f!\n",perM);
	
}
