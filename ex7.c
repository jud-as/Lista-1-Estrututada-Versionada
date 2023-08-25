#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ContaBancaria
{
    char titular[100];
    int nConta;
    float saldo;    
}; struct ContaBancaria C;




int main() {
    int opcao;
    float valorSaque;

    printf("Nome: "); scanf("%s", &C.titular);
    printf("\nConta: "); scanf("%d", &C.nConta);

while (1) {

        printf("\n\nMenu:\n");
        printf("1. Verificar Saldo\n");
        printf("2. Depositar\n");
        printf("3. Sacar\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                
                printf("\nSaldo da conta: ");
                printf("\n%f", C.saldo);
                break;
            case 2:
                
                printf("Valor deposito: :\n");
                scanf("%f", &C.saldo);
                break;

            case 3:
                
                printf("Valor Saque: ");
                scanf("%f", &valorSaque);
                C.saldo = C.saldo - valorSaque;
                break;
            case 4:  
                             
                printf("Saindo do programa.\n");
                return 0;
            default: 

                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }   
}