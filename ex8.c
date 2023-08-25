#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto
{
    char nome[100];
    float preco;
    int estoque;
}Produto;

void registroProduto(Produto *P, const char *nome, float preco, int estoque) {
    strcpy(P->nome, nome);
    P->preco = preco;
    P->estoque = estoque;
}

int main() {
    int qntd; 
    Produto biscoito;
    registroProduto(&biscoito, "Biscoito", 7.5, 1000);
    printf("Quantidade desejada: \nQuantidade disponivel: %d\n", biscoito.estoque);
    scanf("%d", &qntd);
    printf("Valor total: %.2f\n", qntd * biscoito.preco);
    printf("Quantidade atualizada: %d", biscoito.estoque - qntd);
    return 0;
}