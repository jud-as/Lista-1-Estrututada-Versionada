#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



struct Ponto
{
    int x;
    int y;

}; struct Ponto A, B, C;

void disPontos() {
    float distanciaAB;
    distanciaAB = sqrt(pow(B.x-A.x, 2) + pow(B.y-A.y, 2));
    printf("\nDistancia AB: %.2f ", distanciaAB);
}

void anguloReta() {
float catetoOposto, catetoAdjacente, anguloRad, anguloGraus;

if (A.y < B.y) {
    C.y = A.y;
    catetoOposto = B.y - C.y;
} else {
    C.y = B.y;
    catetoOposto = A.y - C.y;
}

catetoAdjacente = A.x - B.x;
C.x = catetoAdjacente;

anguloRad = atan2(catetoOposto, catetoAdjacente);
anguloGraus = anguloRad * (180 / 3.1415); 

printf("\n\nCateto Oposto: %.1f", catetoOposto);
printf("\nCateto Adjacente: %.1f", catetoAdjacente);
printf("\n\nAngulo da reta: %.1f graus.", anguloGraus);
}


int main() {

    printf("X, Y do ponto 'A', respectivamente: \n");
     scanf("%d%d", &A.x, &A.y);
    printf("X, Y do ponto 'B', respectivamente: \n");
     scanf("%d%d", &B.x, &B.y);
    printf("\n\n");
    disPontos();
    anguloReta();
    ///////////////////////////////////////////////////////////

return 0;
}