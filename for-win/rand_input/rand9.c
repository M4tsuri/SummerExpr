#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a = rand() % 49 + 2;
    printf("%d", a);
    return 0;
}