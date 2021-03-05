#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Leitura e impressao de strings
int main()
{
    char nome[51];
    char outro[51];
    fflush(stdin);
    printf("Digite seu nome: \n");
    gets(nome);
    int tamanho = strlen(nome);
    //scanf("%s", nome);
    fflush(stdin);
    printf("Digite outro nome: \n");
    gets(outro);
    int tamanho2 = strlen(outro);
    //scanf("%s", outro);
    printf("Apresentar o nome: %s \n", nome);
    printf("Nome tem %d caraceteres \n", tamanho);
    printf("Apresentar o outro nome: %s \n", outro);
    printf("Nome tem %d caraceteres \n", tamanho2);
    puts(nome);
    puts(outro);
    return 0;
}
