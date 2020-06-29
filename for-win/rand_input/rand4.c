#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        printf("%d", rand() % 1000 + 1);
        if (i == 9) {
            printf("\n");
        } else {
            printf(" ");
        }
    }
    return 0;
}