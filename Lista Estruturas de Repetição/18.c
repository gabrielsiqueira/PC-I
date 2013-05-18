#include<stdio.h>
#include<stdlib.h>
main()
{
float padrao1; //tempo padrão da etapa 1
float padrao2; //tempo padrao da etapa 2
float padrao3; //tempo padrao da etapa 3
int inscricao; //numero de inscricao da equipe
float tempo1; //tempo da equipe ao cumprir a etapa 1
float tempo2; //tempo da equipe ao cumprir a etapa 2
float tempo3; //tempo da equipe ao cumprir a etapa 3
float pontos; //total de pontos da equipe na etapa 1
float total; // total de pontos de cada equipe ao final
int campeao; //numero de inscricao da equipe vencedora
float delta1, delta2, delta3; //diferença entre os tempos gastos e os tempos padrão
float ponto1, ponto2, ponto3; //pontos de cada etapa
int maior;
//inicialização das condições limites
printf("\nInforme o tempo padrao para as tres etapas: \n");
scanf("%f %f %f", &padrao1, &padrao2, &padrao3);
while (inscricao!=999)
{
    //leitura do numero de inscrição
    printf("\nInforme o numero de inscricao: ");
    scanf("%d", &inscricao);
    if (inscricao!=999)
    {
        printf("\n\nInforme o tempo gasto nas tres etapas: ");
        scanf("%f", &tempo1);
        printf("\nInforme o tempo gasto na etapa 2: ");
        scanf("%f", &tempo2);
        printf("\nInforme o tempo gasto na etapa 3: ");
        scanf("%f", &tempo3);
        //calculo dos pontos obtidos pela equipe
    delta1=padrao1-tempo1;
    delta2=padrao2-tempo2;
    delta3=padrao3-tempo3;
    if (delta1<3)
        ponto1=100;
    if (delta2<3)
        ponto2=100;
    if (delta3<3)
        ponto3=100;
    if (delta1>=3&&delta1<=5)
        ponto1=80;
    if (delta2>=3&&delta2<=5)
        ponto2=80;
    if (delta3>=3&&delta3<=5)
        ponto3=80;
    if (delta1>5)
        ponto1=80-(delta1-5)/5;
    if (delta2>5)
        ponto2=80-(delta2-5)/5;
    if (delta3>5)
        ponto3=80-(delta3-5)/5;
        printf("\nA equipe %d obteve", inscricao);
        printf("\nPontos da etapa 01: %f", ponto1);
        printf("\nPontos da etapa 02: %f", ponto2);
        printf("\nPontos da etapa 03: %f", ponto3);
        //total de pontos da equipe
        total=ponto1+ponto2+ponto3;
        printf("\nTotal de pontos da equipe: %f", total);
    }
}
}
