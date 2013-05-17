#include <stdio.h>


int main ()
{   int X; // ele da qtos alunos vao no começo da entrada
    float n1, n2, n3;
    int matricula[110];
    float nota[110];
    float nota_final=0;//inicializa ta, se n ela começa com o valor do endereço q o processador pegou na memoria
    int frequencia[110];
    float maior=-1, menor=999999;// menor começa com mto entendeu? e poem float pq pede float
    int total_reprovado = 0;
    int reprovado_falta = 0;
    int i=0;
    float porcentagem_de_reprovados;
scanf("%d", &X);

    for(i=0; i<X; i++)
    {
        printf ("\nDigite a matricula:\n");
        scanf("%d", &matricula[i]);
        printf ("\nDigite as tres notas:\n");
        scanf("%f %f %f", &n1, &n2, &n3);
        nota[i] = (n1 + n2 + n3) / 3;
        printf ("\nDigite a frequencia:\n");
        scanf("%d", &frequencia[i]);
        nota_final += nota[i];


        if(nota[i]<menor)
        {
            menor=nota[i];
        }
        if(nota[i]>maior)
        {
            maior=nota[i];
        }



    }


 /*   for(i=0; i<4; i++)
    // ! : Alterar o 4 para 100 para o código fonte oficial.
    //Aqui será 4 apenas para teste.
    {
        if(nota[i]<menor||menor==-1)
        {
            menor=nota[i];
        }
        if(nota[i]>maior)
        {
            maior=nota[i];
        }
    }
*/
// isso aki cima e de baixo, puis so o de cima pra vc ver q nao ha diferença vc pode por no for de cima...
    for(i=0; i<X; i++)
    {
        printf("\nMatricula: %d, Frequencia: %d\nnota final: %.1f, status: ", matricula[i],frequencia[i], nota[i]);
        if(nota[i] >= 60.0 && frequencia[i] >= 40)// aki é 60, e nao 6
            printf("APROVADO !\n");
        else {
                printf("REPROVADO !\n");
                total_reprovado++;
             }
    }


    printf("\nTotal de alunos reprovados: %d\n", total_reprovado);
    for(i = 0; i < X; i++)
    {
        if(frequencia[i] < 40) reprovado_falta++;
    }
    //esse for aki tb pode por nos de cima

    porcentagem_de_reprovados =  (((float)reprovado_falta)/X)*100;


    printf("\nMaior nota: %f\nMenor nota: %f\n", maior, menor);
    printf("\nMedia da turma: %.2f\n", ((float)nota_final)/X);// aki é %f ta nao %d
    //O Erro do código está aqui, não sei onde estou n00bando ou porquê.
    //printf("\nTotal de alunos reprovados: %d.\n", total_reprovado); vc ja pois em cima
    printf("\nPorcentagem de alunos reprovados por falta: %.1f PORCENTO\n", porcentagem_de_reprovados);// porcento pode ser colocado como %%, porem na saida esta PORCENTO escrito


    return 0;
}

