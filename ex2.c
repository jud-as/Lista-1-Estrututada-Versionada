#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Tipo
{
    int inteiro;
    char caracter;
    float flutuante;
    char string[10];
} Tipo; 

void setTipo (Tipo *T, int inteiro, char caracter, float flutuante)
{
    T->inteiro = inteiro;
    T->caracter = caracter;
    T->flutuante = flutuante;
};

void imprimeTipo(Tipo T) {
    printf("inteiro: %d, Caracter: %c, Flutuante: %.2f", T.inteiro, T.caracter, T.flutuante);
}


int main(){
    Tipo exemplo;
    setTipo(&exemplo, 12, 'C', 1.8);
    imprimeTipo(exemplo);
    return 0; 
}


