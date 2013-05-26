#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int a, b, a2, cubos=0; //Nada especial, apenas veja que a variável a2 salva o valor do scanf sem alterações.
    printf("Digite o valor de A:\n");
    scanf("%d",  &a);
    a2=a;
    printf("Digite o valor de B:\n");
    scanf("%d", &b);
    if(b>a){ //B deve ser maior que A para a contagem dos cubos.
        a++;
        while(a<b){ //Contador simples, usando os valores inseridos
            if(a%2==0){
                cubos=cubos+pow(b,3); //Cálculo e somatória dos cubos.
            }
            a++;
        }
        printf("A soma dos cubos dos valores pares entre %d e %d e %d\n", a2, b, cubos);
    }else{
        printf("B deve ser maior que A.\n");
    }
    return 0;
}
