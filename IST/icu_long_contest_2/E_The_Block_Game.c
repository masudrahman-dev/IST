#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, reversed = 0, remainder, original;
        scanf("%d", &n);
        original = n;
        while (n != 0)
        {
            remainder = n % 10;
            // printf("%d-rem\n", remainder);
            reversed = reversed * 10 + remainder;
            // printf("%d - rev\n", reversed);
            n = n / 10;
            // printf("%d - n\n", n);
        }
        if (original == reversed)
        {
            printf("wins\n");
        }
        else
        {
            printf("loses\n");
        }
    }

    return 0;
}
