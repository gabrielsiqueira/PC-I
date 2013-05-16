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
   scanf("%d", &fem);

   printf("\n");

   total = masc + fem;
   cpor_vaga = total / vagas;
   por_cFem = 100 * (fem / total);


   printf("Numero de candidatos por vaga: %.2f\n", cpor_vaga);

   printf("\n");

   printf("Porcentagem F: %.2f\n", por_cFem);

   printf("\n");


} while(codigo_curso != 0);


  if (cpor_vaga > maior_vaga){


    maior_vaga = total;
    curso = codigo_curso;

  }


     Vtotal2 += total;

    printf("Maior numero de candidatos: %f do curso %d\n", cpor_vaga, curso);


    printf("Total de candidatos: %f\n", total2);



    getch();

    return 0;
}
