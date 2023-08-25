#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

typedef struct DataAdmissao
{
    int dia, mes, ano;
} DataAdmissao;

typedef struct Funcionario
{
    DataAdmissao dataAdmissao;
    char nome[100];
    char cargo[100];
    float salario;
} Funcionario;

void registroFuncionario(Funcionario *F, const char *nome, const char *cargo, float salario, int dia, int mes, int ano) {
    strcpy(F->nome, nome);
    strcpy(F->cargo, cargo);
    F->salario = salario;
    F->dataAdmissao.dia = dia;
    F->dataAdmissao.mes = mes;
    F->dataAdmissao.ano = ano;
}

void calculoSalario(Funcionario *f, float indiceAumento) {
    int ano_atual = 2023;
    int anos_de_servico = ano_atual - f->dataAdmissao.ano;
    float aumento_acumulado = f->salario * pow(1 + indiceAumento, anos_de_servico);
    printf("Aumento: %.2f\n", aumento_acumulado);
    printf("Novo salário: %.2f RS\n", f->salario + aumento_acumulado);
}

int main(){

    Funcionario func;
    registroFuncionario(&func,"Rodrigo","Gestor",5300,23,3,2003);
    calculoSalario(&func, 0.3);
    return 0;
}






