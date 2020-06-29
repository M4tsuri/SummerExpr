#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, j;
    srand(time(NULL));
    int m = rand() % 10 + 1;
    int n = rand() % 10 + 1;

    printf("%d %d\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d", rand() % (200 - 1) - 100);
            if (j == n - 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d", rand() % (200 - 1) - 100);
            if (j == m - 1) {
                printf("\n");
            } else {
                printf(" ");
            }
        }
    }
    return 0;
}