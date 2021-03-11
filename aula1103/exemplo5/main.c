#include <stdio.h>
#include <stdlib.h>

int tamanho(char* texto);
int main()
{
    char frase[101];
    fflush(stdin);
    printf("Digite uma frase: \n");
    gets(frase);
    printf("Tamanho da frase: %d \n", tamanho(frase));
    return 0;
}
int tamanho(char* texto){
    char* p_ini = texto; //endereco da posicao inicial do texto
    char* p_per = texto;
    while(*p_per != '\0'){
        p_per++;
    }
    int tam = p_per - p_ini;
    return tam;
}
