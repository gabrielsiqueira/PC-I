#include <stdio.h>

int main ()
{
  int i=1;
	float marco1,marco2,E,V=20,T;	
	do{
		loop://Local onde o programa continuara caso ocorra um comando goto.
		printf ("Digite um par de marcos quilometricos, em ordem crescente, de duas cidades e\ndigite um par de numeros iguais para terminar:\n");
		scanf ("%f%f",&marco1,&marco2);
		if (marco1==marco2)
		{
			break;//Finaliza o do/while caso os marcos forem iguais.
		}
		else
		{
			for (i=0;i<7;i++)
			{
				E=marco2-marco1;
				if (E<0)
				{
					printf ("Os marcos devem ser digitados em ordem crescente!\n\n\n");
					goto loop;//Para o programa neste ponto e pula para onde está marcado com a palavra loop (linha 8).
				}
				else
				{					
					T=E/V;
					printf ("Velocidade= %fKm/h Decorreu o tempo de %f horas.\n",V,T);
					V+=10;//Mesma coisa que v=v+10.
				}
			
			} 
		}
	
	}while (i!=0);//Faz com que o loop seja sempre infinito e sua condição para sair sejá no primeiro if interno.
}
//Caso queiram que comente mais alguma coisa só avisar!
