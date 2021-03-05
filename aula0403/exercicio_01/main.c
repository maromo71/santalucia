#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define D 7
int main()
{
    srand(time(NULL));
    int matriz[D][D] = {{0}};
    int i, j;
    //gerar a matriz superior
    for(i = 0; i < D; i++){
        for(j = 0; j < D; j++){
            if(i <= j) {
                matriz[i][j] = (rand() % 10) + 1;
            }
        }
    }

    //exibir a matriz
    for(i = 0; i < D; i++){
        for(j = 0; j < D; j++){
            printf("[%3d] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
