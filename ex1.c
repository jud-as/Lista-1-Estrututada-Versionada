#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa{
    char nome[30];
    int idade;
    float altura;
}Pessoa[];


void setPessoa () {

    printf("Nome: "); scanf("%s", &Pessoa->nome);
    printf("\nIdade: "); scanf("%d", &Pessoa->idade);
    printf("\nAltura: "); scanf("%f", &Pessoa->altura);
    system("CLS");
    printf("\nNome: %s", Pessoa->nome);
    printf("\nIdade: %d", Pessoa->idade);
    printf("\nAltura: %.2f", Pessoa->altura);
}


int main() {
    setPessoa();
    return 0;
}