#include <stdio.h>
#include <stdlib.h>
struct Aluno {
    char nome[81];
    int matricula;
    char endereco[121];
    char telefone[21];
    float nota;
};

void ler(struct Aluno tab[], int qtd);

void imprimir(struct Aluno tab[], int mat, int qtd);

void imprimirTodos(struct Aluno tab[], int qtd);

int main()
{
    struct Aluno tabela[100];
    int qtd;
    printf("Digite a quantidade de alunos que deseja cadastrar: \n");
    scanf("%d", &qtd);

    ler(tabela, qtd);
    imprimirTodos(tabela, qtd);

    int mat;
    printf("Digite a matricula a ser encontrada: \n");
    scanf("%d", &mat);
    imprimir(tabela, mat, qtd);
    return 0;
}

void ler(struct Aluno tab[], int qtd){
    int i;
    if(qtd > 100){
        printf("Nao tenho espaco para isto \n");
        exit(1);
    }
    for(i = 0; i < qtd; i++){
        system("cls");
        fflush(stdin);
        printf("Digite o nome do aluno: \n");
        gets(tab[i].nome);
        fflush(stdin);
        printf("Digite a matricula: \n");
        scanf("%d", &tab[i].matricula);
        fflush(stdin);
        printf("Digite o endereco do aluno: \n");
        gets(tab[i].endereco);
        fflush(stdin);
        printf("Digite o telefone do aluno: \n");
        gets(tab[i].telefone);
        fflush(stdin);
        printf("Digite a nota do aluno: \n");
        scanf("%f", &tab[i].nota);
        printf("Registro cadastrado \n");
        system("pause");
    }
}

void imprimir(struct Aluno tab[], int mat, int qtd){
    system("cls");
    int i;
    for(i = 0; i < qtd; i++){
        if(mat == tab[i].matricula){
            printf("Aluno encontrado \n");
            printf("Nome: %s \n", tab[i].nome);
            printf("Matricula: %d \n", tab[i].matricula);
            printf("Endereco: %s \n", tab[i].endereco);
            printf("Telefone: %s \n", tab[i].telefone);
            printf("Nota do Aluno: %f \n", tab[i].nota);
            system("pause");
            return;
        }
    }
    printf("Aluno com essa matricula nao encontrado \n");
    system("pause");
}

void imprimirTodos(struct Aluno tab[], int qtd){
    system("cls");
    int i;
    for(i = 0; i < qtd; i++){
         printf("\nDados do aluno \n");
         printf("Nome: %s \n", tab[i].nome);
         printf("Matricula: %d \n", tab[i].matricula);
         printf("Endereco: %s \n", tab[i].endereco);
         printf("Telefone: %s \n", tab[i].telefone);
         printf("Nota do Aluno: %f \n", tab[i].nota);
         printf("--------------------------------\n");
    }
    system("pause");
}
