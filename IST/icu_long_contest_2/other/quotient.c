#include <stdio.h>
int main()
{
    int dividend, divisor, quotient, remainder;

    scanf("%d %d", &dividend, &divisor);
    // compute quotient

    quotient = dividend / divisor;
    // remainder
    remainder = dividend % divisor;
    printf("%d %d\n", quotient, remainder);

    return 0;
}
