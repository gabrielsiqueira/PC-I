#include <stdlib.h>
#include <stdio.h>

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

	while(trans != 0)
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

		trans -= 1;
	}
}
