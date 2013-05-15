#include <stdlib.h>
#include <stdio.h>

//Mais uma copi-cola pra vocês. <3

int main()
{

int cont=0,n_turmas=0,quant=0,n_alunos=0,mat=0,alunos_A=0,prct_m5=0;
char chamada,turma;
float prct_A=0;

printf("\nDigite o numero de turmas:\n");
scanf("%d",&n_turmas);

for(cont=0; cont<n_turmas; cont++)
{
   printf("\nDigite a letra correspondente a turma:\n");
   scanf(" %c",&turma);
   printf("\nDigite agora o numero de alunos:\n");
   scanf("%d",&n_alunos);
   for(quant=0; quant<n_alunos; quant++)
   {
       printf("\nDigite a matricula correspondente ao aluno:\n");
      scanf("%d",&mat);
      printf("Entao, sua chamada [A/P]:\n");
      scanf(" %c",&chamada);
      if(chamada =='A')
      {
      alunos_A++;
      }
   }

   prct_A = (float)(alunos_A*100)/n_alunos;

   if(prct_A>5)
   prct_m5++;
   printf("TURMA %c\nPORCENTAGEM DE AUSENCIA = %.2f\n",turma,prct_A);

}

printf("NUMERO DE TURMA COM AUSENCIA SUPERIOR A 5 PORCENTO = %d\n",prct_m5);

return 0;

}
