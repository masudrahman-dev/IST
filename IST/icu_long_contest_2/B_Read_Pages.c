#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t, n, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d", &n, &x, &y);
        if (x * y >= n)
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
