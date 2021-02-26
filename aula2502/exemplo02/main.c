#include <stdio.h>
#include <stdlib.h>
#define DIM 5
int main()
{
    int valores[DIM];
    int cont = 0;
    int i;
    //Desafio: é saber o custo computacional
    do {
        printf("Digite um numero \n");
        scanf("%d", &valores[cont++]);
    }while(cont!=DIM && valores[cont-1]!=3);
    for(i = 0; i <= cont; i++) {
        printf("Valor %d \n", valores[i]);
    }

    return 0;
}
