#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main ()
{
    int cont=0,numero, idade, candidato=1;
    //numero = Refere-se ao número de inscrição de 4 dígitos, dado na entrada.
    //idade -> Idade do candidato, fornecida durante a entrada.
    //candidato -> Indica o número de ordem do candidato.
    int numero, idade, candidato=1;
    //homenint -> Como a contagem de candidatos de sexo masculino, é realizada em float, para operações de porcentagem, esta variável é utilizada apenas para a demonstração de dados de saída, sem casas decimais.
    //mulher -> Número de candidatos de sexo feminino.
    int homemint=0, mulher=0;
    //mulher35exp -> Indica o número de mulheres que tem idade inferior a 35 anos e com experiencia no serviço.
    //menorf1 -> Primeiro valor de idade necessário para calcular menorf2.
    //menorf2 -> A menor idade entre mulheres que já tem experiencia no serviço.
    int mulher35exp=0, menorf1=0, menorf2=0;
    //homem45 -> Número de homens com mais de 45 anos.
    //homemtotal -> Somatório das idades dos homens que possuem experiência no trabalho. Para cálculo da média.
    //homemnumero -> Número de homens com experiência no trabalho.
    //Variáveis em float, para cálculo de porcentagens.
    float homem45=0, homemtotal=0, homemnumero=0;
    //item3 e item4 -> Indicam, respectivamente, os resultados finais dos tópicos 3 e 4, do enunciado.
    //itemx -> Indica a porcentagem de homens com experiência no trabalho. Não está presente no enunciado em si, mas aparece entre os dados de saída.
    //Mais detalhes no final...
    float item3, item4, itemx;
    //sexo -> Obtem o valor em string, do sexo do candidato.
    //exp -> Obtem um valor (sim ou não), de que o candidato possui experiência no trabalho em questão.
    char sexo[20], exp[3];
    //homem -> Número de candidatos de sexo masculino. Mesmo valor de "homemint". Em flood, para operações de porcentagem.
    float homem;
    //homem45int -> Mesmo valor de "homem45". Utilizada para demonstrar dados de saída, sem casas decimais.
    int homem45int;
    //A entrada de dados irá se repetir, até que o valor da variável de controle "cont", atinja 1.
    
    while (cont<1)
    {
        //Obtenção do número de inscrição.
        printf ("Digite o numero de inscricao do candidato %d (4 digitos): \n", candidato);
        scanf ("%d", &numero);
        if (numero==0)
        {
            //Ao fornecermos "0", como número de inscrição, teremos cont=1, encerrando a repetição.
            cont++;
        }
        //Limitando o número de dígitos do número de inscrição para 4:
        if (numero>999 && numero<10000)
        {
            //A variável "candidato" irá determinar o número de ordem do candidato.
            printf ("Digite a idade do candidato %d: \n", candidato);
            scanf ("%d", &idade);
            //Obtendo um valor de idade válido:
            if (idade>0)
            {
                //Obtendo em string, o sexo do candidato.
                printf ("Digite o sexo do candidato %d (masculino/feminino): \n", candidato);
                scanf ("%s", &sexo);
                if (strcmp (sexo, "Masculino")==0 || strcmp(sexo, "masculino")==0 || strcmp(sexo, "MASCULINO")==0)
                {
                    //Aumentando em 1, o número de homens com mais de 45 anos, para 2 tópicos.
                    if (idade>45)
                    {
                        homem45++;
                    }
                    //Obtendo em string, a resposta de que o candidato possui ou não, experiência de trabalho.
                    printf ("O candidato %d possui experiencia no servico? (sim/nao) \n", candidato);
                    scanf ("%s", &exp);
                    if (strcmp (exp, "Sim")==0 || strcmp(exp, "sim")==0 || strcmp(exp, "SIM")==0)
                    {
                        //Dados de entrada válidos. Passamos então para outro candidato, acrescentando em 1, o número de candidatos de sexo masculino.
                        candidato++;
                        homem++;
                        //Acrescentamos ao total da idade de homens com experiência de trabalho, para a obtenção da média.
                        homemtotal+=idade;
                        //Aumentamos em 1, o total de homens com experiência de trabalho, para a obtenção da média.
                        homemnumero++;
                    }
                    if (strcmp (exp, "Nao")==0 || strcmp(exp, "nao")==0 || strcmp(exp, "NAO")==0)
                    {
                        //Dados de entrada válidos. Passamos então para outro candidato, acrescentando em 1, o número de candidatos de sexo masculino.
                        candidato++;
                        homem++;
                    }
                }
                if (strcmp (sexo, "Feminino")==0 || strcmp(sexo, "feminino")==0 || strcmp(sexo, "FEMININO")==0)
                {
                    //"menorf1" é utilizado para obtermos um valor mínimo referencial, de forma com que "menorf2", indique sempre a menor idade, de uma candidata.
                    menorf1+=idade;
                    printf ("A candidata %d possui experiencia no servico? (sim/nao) \n", candidato);
                    scanf ("%s", &exp);
                    if (strcmp (exp, "Sim")==0 || strcmp(exp, "sim")==0 || strcmp(exp, "SIM")==0)
                    {
                        //Aumenta em 1, o número de mulheres com experiência de trabalho, e menos de 35 anos de idade, conforme o enunciado.
                        if (idade<35)
                        {
                            mulher35exp++;
                        }
                        //A partir do momento em que obtemos o primeiro minimo, descartamos menorf1.
                        if (menorf2==0)
                        {
                            menorf2+=menorf1;
                        }
                        //">0" para um valor válido.
                        //A partir do momento em que menorf2 é o mínimo, este mínimo será substituido por outro, caso um novo valor de "idade", seja menor que ele.
                        if (menorf2>0 && menorf2>idade)
                        {
                            menorf2=idade;
                        }
                        //Dados de entrada válidos. Passamos então para outro candidato, acrescentando em 1, o número de candidatos de sexo feminino.
                        candidato++;
                        mulher++;
                    }
                    if (strcmp (exp, "Nao")==0 || strcmp(exp, "nao")==0 || strcmp(exp, "NAO")==0)
                    {
                        //Dados de entrada válidos. Passamos então para outro candidato, acrescentando em 1, o número de candidatos de sexo feminino.
                        candidato++;
                        mulher++;
                    }
                }
            }
        }
    }
    //Calculando os valores de saída:
    //Aqui, definimos "homemint" (mesmo valor de homem, em inteiros), para demonstração, na saída.
    homemint=homem;
    //O mesmo acontece com a variável "homem45".
    homem45int=homem45;
    //Resposta do 1º item do enunciado -> Número de candidatos de sexo feminino. Variável "mulher".
    //Resposta do 2º item do enunciado -> Número de candidatos de sexo masculino. Variável "homemint" (demonstração sem casas decimais).
    //Resposta do 3º item do enunciado -> Realiza uma média de idades, com a soma de todas as idades de candidatos com experiência de trabalho, dividida pelo número de candidatos com experiência de trabalho.
    item3=homemtotal/homemnumero;
    //Resposta do 4º item do enunciado -> Regra de três para a obtenção do percentual de homens com mais de 45 anos, dentre os demais.
    //Resposta do 5º item do enunciado -> Variável "mulher35exp".
    //Resposta do 6º item do enunciado -> Variável "menorf", que indica a menor idade, entre as dadas para candidatos de sexo feminino.
    item4=(homem45*100)/homem;
    //Resposta do 4º item do EXEMPLO (diferente do que é pedido no enunciado, e não me pergunte por que) -> Percentual de homens com experiência de trabalho, obtido por regra de três.
    itemx=(homemnumero*100)/homem;
    //Resposta do 5º item do EXEMPLO -> A variável "homem45int" (número inteiro, de candidatos de sexo masculino com mais de 45 anos).
    printf ("\nNumero de candidatos de sexo feminino: %f \n", mulher);
    printf ("Numero de candidatos de sexo masculino: %f \n", homemint);
    printf ("Numero de mulheres com idade inferior a 35, e com experiencia no servico: %d \n", mulher35exp);
    printf ("Menor idade entre as mulheres com experiencia no servico: %d \n", menorf2);
    //Enunciado (3 e 4):
    printf ("Idade media dos homens com experiencia no servico: %f \n", item3);
    printf ("Porcentagem de homens com mais de 45 anos, entre o total de homens: %f \n", item4);
    //Exemplo (4º e 5º):
    printf ("Porcentagem de homens com experiencia no servico: %f \n", itemx);
    printf ("Numero de homens com mais de 45 anos: %f \n", homem45int);
    return 0;
}
