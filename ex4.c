#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct contato
{
    char nome[30];
    char telefone
}; struct contato C[];


int main() {

    int i, max, cont;
    int menu = 0;
    
    if (menu == 0)
    {
        system("CLS");
        printf("\nADD CONTATOS --------------------------------- 1");
        printf("\nLISTAR CONTATOS ------------------------------ 2");
        scanf("%d", &menu);
    } else {

            switch (menu)
            {
            case 1:
                system("CLS");
                printf("Quantos contatos deseja adicionar? "); scanf("%d", &max);
                for ( i = 0; i < max; i++)
                {
                    system("CLS");
                    printf("Contato: %d/%d", i+1, max);
                    printf("\n\nNome contato: "); scanf("%s", &C[i].nome);
                    printf("\nNumero de Telefone: "); scanf("%d", &C[i].telefone);
                }

                menu = 0;
            break;

            case 2:
                printf("LISTA CONTATOS: \n\n\n");
                for ( cont = 0; cont < max; cont++)
                {
                    printf("%s, %d", C[i].nome, C[i].telefone);
                }
            
            break;

            default:
                printf("Opcao invalida.");
            break;

            }
        } 
}