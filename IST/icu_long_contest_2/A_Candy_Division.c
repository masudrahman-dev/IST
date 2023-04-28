#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        if (n % 3 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}
