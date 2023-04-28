#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    char s[256];
    fgets(s, 256, stdin);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        printf("%c", s[i]);
        }
    // printf("%s", s);

    return 0;
}
