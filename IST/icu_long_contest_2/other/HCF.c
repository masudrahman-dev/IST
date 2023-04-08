#include <stdio.h>
int main()
{
    int n1, n2, gcd;
    scanf("%d %d", &n1, &n2);
    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        // check if i is factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD of %d and %d is %d\n", n1, n2, gcd);

    return 0;
}
