#include <stdlib.h>
#include <stdio.h>

//Os bancos atualizam diariamente as contas de seus clientes.
//Essa atualização envolve a análise dos depósitos e retiradas de cada conta.
//Numa conta de saldo mínimo, uma taxa de serviço édeduzida se a conta cai abaixo
//de uma certa quantia especificada.
//A primeira linha contem o numero da conta, o valor do saldo atual
//e do saldo mínimo diário,quantidade de transações e taxa de serviço;
//As linhas seguintes contem o valor e o código da transação ( depósito ou retirada );
//Calcule o saldo ( saldo/débito ) da conta ao fim do dia
//( se o resultado for negativo, isto
//significa insuficiência de fundos na conta );
//Escreva , para cada conta, o seu número e o saldo calculado.
// Se não houver fundos, imprimao número da conta e a mensagem “ NÃO HÁ FUNDOS ”;
//Utilize como flag o número da conta igual a zero;

int main (void)
{
	// declaracao das variaveis

    float minimo;// balanco minimo diario
	int trans = 0;// quantidade de transacoes do dia
	float taxa;// valor da taxa de servico
	int conta;// numero da conta
	float valor;// valor da transacao
	char tipo;// tipo da transacao (d-deposito, r-retirada)
	float saldo;// saldo da conta

	// leitura das condicoes do banco

    printf ( "\nInforme o numero da conta:\n");
    scanf ("%d", &conta);

	printf ("\nInforme o valor do saldo atual:\n");
	scanf ("%f", &saldo);

	printf ("\nInforme o valor do balanco minimo diario:\n");
	scanf ("%f", &minimo);

	printf ("\nInforme a quantidade de transacoes:\n");
	scanf("%d", &trans);


	printf ("\nInforme o valor da taxa de servico (em porcento):\n");
	scanf("%f", &taxa);

	while(trans > 0)
	{
		// leitura dos valores das contas

		printf ("\nInforme o valor da transacao:\n");
		scanf ("%f", &valor);

		printf ("\nInforme o tipo da transacao [D = Deposito| R = Retirada]:\n");
		scanf ("%c", &tipo);

		// verifica se e uma operacao de deposito ou retirada

		if ( tipo == 'D' )
		{
			saldo += valor;
		}
		else
		{
			if ( tipo == 'R' )
			{
				saldo -= valor;
			}
		}

		// verifica situacao do balanco minimo

		if ( saldo < minimo )
		{
			saldo = saldo - saldo * taxa / 100;

			printf ("\nNUMERO DA CONTA: %d.\nNAO HA FUNDOS\n", conta);
		}
		else
		{
			printf ("\nNUMERO DA CONTA: %d.\nSALDO FINAL: %f.\n", conta, saldo);
		}

		trans--; //msm q -=1 ;
	}
}
