#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    char s[21];
    char low[27] = "abcdefghijklmnopqrstuvwxyz";
    int  capz    = 'Z';
    int  capa    = 'A';
    int  length;
    for (int j = 0; j < 10; j++) {
        length = rand() % 19 + 1;
        s[0]   = rand() % (capz - capa + 1) + capa;
        for (int i = 1; i <= length; i++) {
            s[i] = low[rand() % 27];
        }
        s[length + 1] = '\0';
        printf("%s\n", s);
    }
    return 0;
}