#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int k = rand() % 1000 + 1;
    int n = rand() % 1000 + 1;
    while (n < k) {
        n = rand() % 1000 + 1;
    }
    int m = rand() % 2000 + 1;
    printf("%d %d %d\n", n, k, m);
    return 0;
}