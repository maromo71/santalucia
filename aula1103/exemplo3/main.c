#include <stdio.h>
#include <stdlib.h>

int main()
{
    short x =5, *px = &x;
    long y = 5.0, *py = &y;
    printf("%d %ld\n", x, (long)px);
    printf("%d %ld\n", x + 1, (long)(px + 1));
    printf("%d %ld\n", y, (long)py);
    printf("%d %ld\n", y + 1, (long)(py + 1));
    return 0;
}
