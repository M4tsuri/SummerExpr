#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int m = rand() % 100 + 1;
    int n = rand() % 100 + 1;
    printf("%d %d\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", rand() % (20000 - 1) - 10000);
            if (j == n - 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
    return 0;
}