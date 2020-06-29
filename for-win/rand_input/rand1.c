#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int p = rand() % 1000 + 1;
    int q = rand() % 1000 + 1;
    while (q < -20 * p || q > 20 * p) {
        q = rand() % 1000 + 1;
    }
    printf("%d %d\n", p, q);
    return 0;
}