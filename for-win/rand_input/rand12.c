#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    double a = (double)rand() / RAND_MAX * 1000 + 1.0;
    printf("%.1lf", a);
    return 0;
}