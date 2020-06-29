#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int  a = rand() % 500 + 1;
    int  c, d;
    char b[500];
    for (int i = 0; i < a; i++) {
        c = rand() % 10;
        d = rand() % 3;
        if (d == 0) {
            b[i] = (char)(c + 48);
        } else if (d == 0) {
            b[i] = (char)(c + 65);
        } else {
            b[i] = (char)(c + 97);
        }
    }
    printf("%d\n", a);
    for (int i = 0; i < a; i++) {
        printf("%c", b[i]);
    }
    return 0;
}