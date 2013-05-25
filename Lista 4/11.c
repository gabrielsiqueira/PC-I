#include <stdio.h>
#include <stdlib.h>
int main()
{
    int codigo_curso, curso = 0, vagas, masc, fem;
    // codigo_curso: código do curso, fornecido pelo usuário;
    //curso: variável de controle;
    // vagas: número de vagas disponíveis por curso, valor fornecido pelo usuário;
    //masc e fem: respectivamente número de candidatos do sexo masculino e do sexo feminino inscritos no vestibular;
    float cpor_vaga, por_cFem, total = 0, total2 = 0, maior_vaga = 0;
    //cpor_vaga: número de candidatos por vagas em cada curso;
    //por_cFem: porcentagem de candidatos do sexo feminino inscritos no vestibular;
    //total: número de candidatos inscritos em cada curso fornecido;
    //total2: numero total de candidatos inscritos no vestibular;
    //maior_vaga: curso com maior número de candidatos po vaga;
//Inicialmente o usuário fornece os dados de entrada referentes ao vestibular; ressaltando que, o 0 funciona como parametro indicador de finalização do programa.
//A condicão de funcionamento do programa, é que o código seja maior que 0.
do {
   printf("Forneca o codigo do curso ou digite 0 para finalizar: ");
   scanf("%d", &codigo_curso);
   if(codigo_curso == 0)
   break;
   printf("\nForneca o numero de vagas oferecidas: ");
   scanf("%d", &vagas);
   printf("\nForneca o numero de candidatos do sexo masculino: ");
   scanf("%d", &masc);
   printf("\nForneca o numero de candidatos do sexo feminino: ");
   scanf("%d", &fem);
//Cálculo das variáveis declaradas:
   total = masc + fem;
   cpor_vaga = total / vagas;
   por_cFem = 100 * (fem / total);
//Resposta do primeiro item pedido, o número de candidatos por vaga em cada curso fornecido;
   printf("Numero de candidatos por vaga: %.2f\n", cpor_vaga);
   printf("\n");
//Resposta do segundo item, a porcentagem de candidatos do sexo feminino em cada curso;
   printf("Porcentagem F: %.2f\n", por_cFem);
   printf("\n");
    total2 += total; // para cada caso de teste, lembre q as variaveis sao substituidas !
    if(maior_vaga < cpor_vaga){// verifica para cada caso qual é o maior
        maior_vaga = cpor_vaga;
        curso = codigo_curso;// aqui é pego o código do curso
    }
} while(codigo_curso != 0);
//Resposta para o terceiro item, maior número de candidatos por vaga e em qual curso;
    printf("Maior numero de candidatos: %.2f do curso %d\n", maior_vaga, curso);
//Resposta do último item, total de candidatos inscritos neste vestibular;
    printf("Total de candidatos: %.2f\n", total2);
    return 0;
}
