#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int y = rand() % 3001;
    int m = rand() % 3001;
    int d = rand() % 3001;
    printf("%d-%d-%d\n", y, m, d);
    return 0;
}