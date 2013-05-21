#include<stdlib.h>
#include<stdio.h>

int main(){
    int idade,N=-1;
    float media=0,soma=0;
    while(idade!=0){  //loop que recebera valores para idade e fará a soma dos valores até que o usuario digite 0.
        printf("informe a idade: \n");
        scanf("%d", &idade);
        soma=soma+idade;
    N++;
    }
    media=soma/N;
    printf("\na idade media do grupo e:%f \n", media);
}
