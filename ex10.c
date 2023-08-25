#include <stdio.h>


struct Moeda {
    double dolares;
    double euros;
};


double taxaDolarParaEuro = 0.85; 
double taxaEuroParaDolar = 1.18; 

// Função para converter dólares para euros
double converterDolaresParaEuros(double dolares) {
    return dolares * taxaDolarParaEuro;
}


double converterEurosParaDolares(double euros) {
    return euros * taxaEuroParaDolar;
}

int main() {
    struct Moeda moeda;
    
    printf("Digite o valor em dólares: ");
    scanf("%lf", &moeda.dolares);
    
    
    moeda.euros = converterDolaresParaEuros(moeda.dolares);
    
    printf("%.2lf dólares equivalem a %.2lf euros.\n", moeda.dolares, moeda.euros);
    
    printf("Digite o valor em euros: ");
    scanf("%lf", &moeda.euros);
    
    
    moeda.dolares = converterEurosParaDolares(moeda.euros);
    
    printf("%.2lf euros equivalem a %.2lf dólares.\n", moeda.euros, moeda.dolares);
    
    return 0;
}