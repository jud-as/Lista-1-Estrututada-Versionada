#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Estudante
{
    char nome[100];
    int matricula;
    float n1;
    float n2;
    float n3;
}; struct Estudante E;

void calculoNota() {

    float mediaFinal = ((E.n1+E.n2+E.n3)/3)*1.0;
    printf("\nMedia final: %.2f", mediaFinal);
    if (mediaFinal>=7)
    {
        printf("\nAluno aprovado.");
    } else
    {
        printf("\nAluno reprovado.");
    }

}

int main() {
    printf("\nNome: "); scanf("%s", &E.nome);
    printf("\nMatricula: "); scanf("%d", &E.matricula);
    printf("\nN1: "); scanf("%f", &E.n1);
    printf("\nN2: "); scanf("%f", &E.n2);
    printf("\nN3: "); scanf("%f", &E.n3);

    calculoNota();
    return 0;
}