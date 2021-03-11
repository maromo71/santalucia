#include <stdio.h>
#include <stdlib.h>

int main()
{
    //boa pratica
    int* ptr = NULL;
    int valor = 15;
    char palavra[11];
    ptr = &valor;
    printf("Valor da variavel valor: %d \n", valor);
    printf("Valor da variavel valor: %d \n", *ptr);

    return 0;
}
