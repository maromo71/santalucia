#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;
    int v[] = {77, 55, 1, 2, 3};
    int i;
    for(i=0; i<5; i++){
        if(i % 2 == 0) soma+= v[i];
    }
    printf("Somatoria: %d \n", soma);
    return 0;
}
