#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define DIM 5
int main()
{
    srand(time(NULL));
    int v[DIM];
    int i;
    for(i = 0; i<DIM; i++){
        v[i] = rand() % 10;
        printf("Valor: %d \n", v[i]);
        if(v[i]%2==1) v[i]= pow(v[i], 3.0);
        printf("Valor agora: %d \n", v[i]);
    }
    return 0;
}
