#include <stdio.h>
#include <stdlib.h>
//tipo de dado
struct Pessoa {
    int codigo;
    char nome[21];
    char email[61];
};

void ler(struct Pessoa vet[], int t);
void imprimir(struct Pessoa vet[], int t);
int main()
{
    struct Pessoa vetPessoa[2];
    struct Pessoa pessoa;
    //registrar uma entrada de dados para uma pessoa
    //printf("Digite o codigo da pessoa: \n");
    //scanf("%d", &pessoa.codigo);
    //fflush(stdin);
    //printf("Digite o nome da pessoa: \n");
   // gets(pessoa.nome);
    //fflush(stdin);
    //printf("Digite o email da pessoa \n");
    //gets(pessoa.email);
    //imprimir os dados
    //printf("Dados da pessoa \n");
    //printf("Codigo: %d \n", pessoa.codigo);
    //printf("Nome: %s \n", pessoa.nome);
    //printf("Email: %s \n", pessoa.email);

    //Agora vamos alimentar o vetor
    //ler(vetPessoa, 2);
    //Chamar o imprimir
    //imprimir(vetPessoa, 2);

    printf("%d \n", sizeof(struct Pessoa));
    return 0;
}

void ler(struct Pessoa vet[], int t){
    int i;
    for(i=0; i<t; i++){
        printf("Digite o codigo da pessoa: \n");
        scanf("%d", &vet[i].codigo);
        fflush(stdin);
        printf("Digite o nome da pessoa: \n");
        gets(vet[i].nome);
        fflush(stdin);
        printf("Digite o email da pessoa \n");
        gets(vet[i].email);
    }
}
void imprimir(struct Pessoa vet[], int t){
    int i;
    for(i = 0; i < t; i++){
        printf("Dados da pessoa \n");
        printf("Codigo: %d \n", vet[i].codigo);
        printf("Nome: %s \n", vet[i].nome);
        printf("Email: %s \n", vet[i].email);
    }
}
