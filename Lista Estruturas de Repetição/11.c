#include <stdio.h>
#include <stdlib.h>




int main()
{
    int codigo_curso, curso = 0, vagas, masc, fem;
    float cpor_vaga, por_cFem, total = 0, total2 = 0, maior_vaga = 0;




do {


   printf("Forneca o codigo do curso ou digite 0 para finalizar: ");
   scanf("%d", &codigo_curso);


   if(codigo_curso == 0)
   break;


   printf("\n");


   printf("Forneca o numero de vagas oferecidas: ");
   scanf("%d", &vagas);


   printf("\n");


   printf("Forneca o numero de candidatos do sexo masculino: ");
   scanf("%d", &masc);


   printf("\n");


   printf("Forneca o numero de candidatos do sexo feminino: ");


   printf("\n");


   total = masc + fem;
   cpor_vaga = total / vagas;
   por_cFem = 100 * (fem / total);




   printf("Numero de candidatos por vaga: %.2f\n", cpor_vaga);


   printf("\n");


   printf("Porcentagem F: %.2f\n", por_cFem);


   printf("\n");
    total2 += total; // para cada caso de teste, lembre q as variaveis sao substituidas !
    if(maior_vaga < cpor_vaga){// verifica para cada caso qual é o maior
        maior_vaga = cpor_vaga;
        curso = codigo_curso;// aqui é pego o código do curso

    }



} while(codigo_curso != 0);




    printf("Maior numero de candidatos: %.2f do curso %d\n", maior_vaga, curso);




    printf("Total de candidatos: %.2f\n", total2);



    return 0;
}

