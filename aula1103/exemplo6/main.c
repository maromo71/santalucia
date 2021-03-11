#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10; //chacara do vizinho
    int *p_x = &x; //portao da chacara do Maromo
    int **p_p_x = &p_x;
    printf("Valor de x: %d \n", **p_p_x);
    return 0;
}
