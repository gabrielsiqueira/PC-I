#include <stdio.h>

int main ()
{   int X;
    float n1, n2, n3;
    int matricula[110];
    float nota[110];
    float nota_final=0;
    int frequencia[110];
    float maior=-1, menor=999999;
    int total_reprovado = 0;
    int reprovado_falta = 0;
    int i=0;
    float porcentagem_de_reprovados;

    printf("\nDigite a quantidade de alunos:\n");//Como o enunciado ficou confuso e contraditório ao exemplo, optei por seguir o exemplo de saída e entrada.
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
        printf("\nMatricula: %d, Frequencia: %d\nnota final: %.1f, status: ", matricula[i],frequencia[i], nota[i]);

        if(nota[i] >= 60 && frequencia[i] >= 40)
        {
            printf("APROVADO !\n");
        }
        else {
                printf("REPROVADO !\n");
                total_reprovado++;
             }
        if(frequencia[i] < 40) reprovado_falta++;
    }

    porcentagem_de_reprovados = (((float)reprovado_falta)/X)*100;

    printf("\nMaior nota: %.2f\nMenor nota: %.2f\n", maior, menor);
    printf("\nMedia da turma: %.2f\n", ((float)nota_final)/X);
    printf("\nTotal de alunos reprovados: %d\n", total_reprovado);
    printf("\nPorcentagem de alunos reprovados por falta: %.2f PORCENTO\n", porcentagem_de_reprovados);

//Creio que o código esteja de fácil entendimento e explicado por si só...
//...qualquer coisa (foda-se) eu adiciono comentários adicionais mais tarde. <3
//feat. Glauco Buarque.

    return 0;
}
