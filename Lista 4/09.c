#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main ()
{
    //A variável number se refere ao número de crianças mortas. Aumenta com cada entrada.
    //A variável "cont" determina quando a repetição termina, ou seja, quando seu valor é 1, o que ocorre com a entrada de "vazio".
    int number=1, cont=0;
    //A variável "children" é o total de crianças nascidas no período. Ou seja, o valor máximo de entradas, até que se digite "vazio", e termine a repetição.
    //A variável "month" se refere
    int children, month;
    //Variável "gender", determina o sexo da criança morta. Utiliza a biblioteca de string. Limite de 20 caracteres.
    char gender[20];
    //Para os cálculos de porcentagem, as variáveis abaixo seguem em float.
    //count1 -> Primeiro pedido do exercício. Marca o número de crianças mortas. Definido no final do código, com base em "number".
    //count2 -> Segundo pedido do exercício. Marca o número de crianças de sexo masculino, mortas.
    //count3 -> Terceiro pedido do exercício. Marca o número de crianças que viveram 24, ou menos meses.
    float count1, count2=0, count3=0;
    //Os três valores de saída. Ligados respectivamente aos valores de count1, count2 e count3.
    float percent1, percent2, percent3;
    //Definindo o valor máximo de entradas, ou seja,
    printf ("Digite o numero de criancas nascidas no periodo: \n");
    scanf ("%d", &children);
    //Consideramos o valor inicial como válido, apenas se este for positivo. Não existe quantidade negativa de gente. lol
    if (children>0){
    //Iremos continuar a repetição, contanto que esta não seja parada por cont=1 (ativado ao dar "vazio" como entrada), ou ao atingirmos uma quantidade de mortos, igual ao de crianças que nasceram.
    while (cont<1 && number<=children){
        //A variável "number" indica o número de ordem da entrada, além de evitar que haja um número de mortos, maior do que o de crianças que nasceram.
        printf ("Digite o sexo da crianca %d (feminino/masculino): \n", number);
        scanf ("%s", &gender);
        //Comando de string, para a obtenção de uma entrada escrita, do sexo da criança.
        if(strcmp (gender, "masculino")==0 || strcmp(gender, "Masculino")==0 || strcmp(gender, "MASCULINO")==0){
             //Como "count2" se refere ao segundo pedido do exercício, ela irá marcar o número de crianças de sexo masculino que nasceram.
             count2++;
             printf ("Digite o numero de meses de vida da crianca %d: \n", number);
             scanf ("%d", &month);
             if (month<25 && month>0){
                //Como "count3" se refere ao terceiro pedido do exercício, ela irá marcar o número de crianças que viveram menos de 25 meses.
                count3++;
                number++;
             }
                //Quando não atingimos a condição pedida pelo terceiro tópico de saída, não adicionamos valores a "count3".
             if (month>24 && month>0){
                number++;
             }
        }
        if(strcmp (gender, "feminino")==0 || strcmp(gender, "Feminino")==0 || strcmp(gender, "FEMININO")==0){
             printf ("Digite o numero de meses de vida da crianca %d: \n", number);
             scanf ("%d", &month);
             if (month<25 && month>0){
                count3++;
                number++;
             }
             if (month>24 && month>0){
                number++;
             }
        }
        if(strcmp (gender, "VAZIO")==0 || strcmp(gender, "vazio")==0 || strcmp(gender, "Vazio")==0){
             //Atribui valor 1 a "cont", ao digitarmos "vazio", no campo de gênero da criança, terminando a repetição, conforme o comando "while".
             cont++;
        }
    }
    //Aqui, definimos "count1", sendo que sua única utilidade, é passar o valor de "number", para "float", com intuito de utilização nas operações de porcentagem.
    count1=number-1;
    //Usando as variáveis de contagem, e as variáveis de saída, realizamos regra de três, para obtermos os resultados abaixo:
    //Demonstrando o quanto, em porcentagem, cada count indica, em relação ao total (children).
    percent1=(100*count1)/children;
    percent2=(100*count2)/children;
    percent3=(100*count3)/children;
    //Demonstrando os resultados finais:
    printf ("Porcentagem de mortos: %f \n", percent1);
    printf ("Porcentagem de criancas de sexo masculino mortas: %f \n", percent2);
    printf ("Porcentagem de criancas com menos de 24 meses de vida mortas: %f \n", percent3);
    return 0;
    }
}

