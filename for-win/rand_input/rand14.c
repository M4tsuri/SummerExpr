#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a = rand() % 30 + 1;
    printf("%d", a);
    return 0;
}