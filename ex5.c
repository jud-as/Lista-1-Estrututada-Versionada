#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Livro {
    char titulo[100];
    char autor[100];
    int anoPublicacao;
};

int main() {
    char autorBuscado[100];
    struct Livro livros[100];  
    int numLivros = 0;  
    int opcao;

    
    while (1) {
        printf("Menu:\n");
        printf("1. Adicionar livro\n");
        printf("2. Listar livros cadastrados\n");
        printf("3. Buscar livros por autor\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                
                printf("Informe o título do livro: ");
                scanf(" %[^\n]s", livros[numLivros].titulo);  
                printf("Informe o autor do livro: ");
                scanf(" %[^\n]s", livros[numLivros].autor);  
                printf("Informe o ano de publicação do livro: ");
                scanf("%d", &livros[numLivros].anoPublicacao);
                numLivros++;
                printf("Livro adicionado com sucesso!\n");
                break;
            case 2:
               
                printf("Lista de livros cadastrados:\n");
                for (int i = 0; i < numLivros; i++) {
                    printf("Título: %s\n", livros[i].titulo);
                    printf("Autor: %s\n", livros[i].autor);
                    printf("Ano de publicação: %d\n", livros[i].anoPublicacao);
                    printf("\n");
                }
                break;
            case 3:
                
                
                printf("Informe o autor que deseja buscar: ");
                scanf(" %[^\n]s", autorBuscado);  
                printf("Livros encontrados para o autor '%s':\n", autorBuscado);
                for (int i = 0; i < numLivros; i++) {
                    if (strcmp(livros[i].autor, autorBuscado) == 0) {
                        printf("Título: %s\n", livros[i].titulo);
                        printf("Ano de publicação: %d\n", livros[i].anoPublicacao);
                        printf("\n");
                    }
                }
                break;
            case 4:
                
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}