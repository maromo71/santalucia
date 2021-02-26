#include <stdio.h>
#include <stdlib.h>
#define DIM 11
int main()
{
    int matriz[DIM][DIM] = {{0}};
    int i, j;
    /*for(i = 0; i < DIM; i++){
        for(j = 0; j < DIM; j++){
            if(i==j){
                matriz[i][j] = 1;
            }else{
                matriz[i][j] = 0;
            }
        }
    }*/
    for(i=0; i<DIM; i++) {
            matriz[i][i] = 1;
    }
    for(i=0; i<DIM; i++){
        for(j=0; j<DIM; j++){
            printf("%2d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
