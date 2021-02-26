#include <stdio.h>
#include <stdlib.h>
#define T 50
int main()
{
    //pulo do gato - coloca 0 na primeira posicao
    //as demais são preenchidas com 0
    int valores[T] = {0};
    int i;

    for(i = 0; i < T; i++){
        printf("Valor na posicao %d => %d \n", i, valores[i]);
    }
    return 0;
}
