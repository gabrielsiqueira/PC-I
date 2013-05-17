#include <stdio.h>

int main ()
{
    float n1, n2, n3;
    int matricula[40];
    float nota[40];
    float nota_final;
    int frequencia[40];
    int maior=-1, menor=-1;
    int total_reprovado = 0;
    int reprovado_falta = 0;
    int i=0;
    float porcentagem_de_reprovados;

    for(i=0; i<4; i++)
    {
        printf ("\nDigite a matricula:\n");
        scanf("%d", &matricula[i]);
        printf ("\nDigite as tres notas:\n");
        scanf("%f %f %f", &n1, &n2, &n3);
        nota[i] = (n1 + n2 + n3) / 3;
        printf ("\nDigite a frequencia:\n");
        scanf("%d", &frequencia[i]);
        nota_final += nota[i];
    }

    for(i=0; i<4; i++)
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

    for(i=0; i<4; i++)
    {
        printf("\nMatricula: %d, nota final: %.1f, status: ", matricula[i], nota[i]);
        if(nota[i] >= 6.0 && frequencia[i] >= 40)
            printf("APROVADO !\n");
        else {
                printf("REPROVADO !\n");
                total_reprovado++;
             }
    }

    printf("\nTotal de alunos reprovados: %d\n", total_reprovado);
    for(i = 0; i < 4; i++)
    {
        if(frequencia[i] < 40) reprovado_falta++;
    }

    porcentagem_de_reprovados =  (((float)reprovado_falta/4)*100);

    printf("\nMaior nota: %d.\nMenor nota: %d.\n", maior, menor);
    printf("\nMedia da turma: %d.\n", (float)nota_final/4);
    //O Erro do código está aqui, não sei onde estou n00bando ou porquê.
    printf("\nTotal de alunos reprovados: %d.\n", total_reprovado);
    printf("\nPorcentagem de alunos reprovados por falta: %.1f.\n", porcentagem_de_reprovados);

    return 0;
}
