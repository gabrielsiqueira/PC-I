#include <stdlib.h>
#include <stdio.h>

int main(void){
    int i, itens, lucroalto=0, lucromedio=0, lucrobaixo=0;
    char item[100];
    double compra, venda, lucro, compratotal=0, vendatotal=0, lucrototal=0;
    printf("Digite o numero de itens:\n");
    scanf("%d", &itens);
    printf("\n");
    for(i=0;i<itens;i++){
        printf("Digite o nome do item:\n");
        scanf("%s", &item);
        printf("Digite o preco de compra do item:\nR$");
        scanf("%lf", &compra);
        compratotal=compratotal+compra;
        printf("Digite o preco de venda do item:\nR$");
        scanf("%lf", &venda);
        vendatotal=vendatotal+venda;
        lucro=venda-compra;
        if(venda<compra*1.1){
            lucrobaixo++;
        }else if(venda<=compra*1.2){
            lucromedio++;
        }else{
            lucroalto++;
        }
    }
    lucrototal=vendatotal-compratotal;
    printf("\nProdutos de alto lucro(20%%+):%d\nProdutos de lucro medio:%d\nProdutos de baixo lucro(10%%-):%d\n", lucroalto, lucromedio, lucrobaixo);
    printf("Preco total de compra:R$%.2lf\nPreco total de venda:R$%.2lf\nLucro total:R$%.2lf\n", compratotal, vendatotal, lucrototal);
    return 0;
}
