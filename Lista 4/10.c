#include <stdio.h>
#include <stdlib.h>

main ()
{
    //A variável "flag" irá indicar, até quando a repetição irá ocorrer, ou seja, quando obtivermos valor 1.
    //A variável "number" indica o número de ordem da casa, aumentando com cada entrada.
    int flag=0, number=1;
    //channel -> canal escolhido na entrada.
    //people -> pessoas na casa, assistindo ao canal escolhido em "channel", durante a entrada.
    int channel, people;
    //As variáveis abaixo, dão os valores totais, de pessoas assistindo determinado canal. Em float, para garantir operações de porcentagem.
    float people4=0, people5=0, people7=0, people12=0;
    //As variáveis abaixo, são os valores de saída, ou seja, o percentual de audiência de cada canal.
    float percent4, percent5, percent7, percent12;
    //Teremos a repetição abaixo, contanto que a flag não seja ativida, ou seja, não chegue a 1.
    while (flag<1)
    {
       //Obtendo o número do canal. "number" é utilizada para indicar o número de ordem da casa.
       printf ("Digite o numero do canal na casa %d(4/5/7/12): \n", number);
       scanf ("%d", &channel);
       //Usando o canal 4 como entrada:
       if (channel==4)
       {
           printf ("Digite o numero de pessoas assistindo ao canal 4, na casa %d: \n", number);
           scanf ("%d", &people);
           if (people>0)
           {
               //Após obtermos um valor de pessoas válido, obtemos uma entrada válida, seguindo para outro "number".
               number++;
               //O valor dado em "people", é adicionado a "people4", que se refere ao total de pessoas assistindo ao canal, na pesquisa.
               people4+=people;
           }
       }
       if (channel==5)
       {
           printf ("Digite o numero de pessoas assistindo ao canal 5, na casa %d: \n", number);
           scanf ("%d", &people);
           if (people>0)
           {
               number++;
               people5+=people;
           }
       }
       if (channel==7)
       {
           printf ("Digite o numero de pessoas assistindo ao canal 7, na casa %d: \n", number);
           scanf ("%d", &people);
           if (people>0)
           {
               number++;
               people7+=people;
           }
       }
       if (channel==12)
       {
           printf ("Digite o numero de pessoas assistindo o canal 12, na casa %d: \n", number);
           scanf ("%d", &people);
           if (people>0)
           {
               number++;
               people12+=people;
           }
       }
       //Terminando a repetição ao dar "0", como número do canal, na entrada:
       if (channel==0)
       {
           //Ao digitarmos "0", como valor de entrada, a flag se torna 1, e encerramos a repetição.
           flag++;
       }
    }
    //Operações em regra de três, para determinar o quanto cada "people" representa, em porcentagem, do total de pessoas que assistem cada canal.
    percent4=(people4*100)/(people4+people5+people7+people12);
    percent5=(people5*100)/(people4+people5+people7+people12);
    percent7=(people7*100)/(people4+people5+people7+people12);
    percent12=(people12*100)/(people4+people5+people7+people12);
    //Dados de saída.
    //Obs: Tá aí um lugar que você pode reescrever do jeito que achar mais legalzinho. :P
    printf ("\nPorcentagem de audiencia: \n\n");
    printf ("Canal 4: %f \n", percent4);
    printf ("Canal 5: %f \n", percent5);
    printf ("Canal 7: %f \n", percent7);
    printf ("Canal 12: %f \n", percent12);
    return 0;
}
