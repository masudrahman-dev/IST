// #include <stdio.h>
// int main()
// {
//     int n1, n2, gcd;
//     scanf("%d %d", &n1, &n2);
//     for (int i = 1; i <= n1 && i <= n2; i++)
//     {
//         // check if i is factor of both integers
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             gcd = i;
//         }
//     }
//     printf("GCD of %d and %d is %d\n", n1, n2, gcd);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n1, n2;
//     scanf("%d %d", &n1, &n2);
//     while (n1 != n2)
//     {
//         if (n1 > n2)
//         {
//             n1 -= n2;
//         }
//         else
//         {
//             n2 -= n1;
//         }
//     }
//     printf("GCD = %d\n", n1);

//     return 0;
// }
#include <stdio.h>
int main()
{
    int n1, n2;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    // if user enters negative number, sign of the number is changed to positive
    n1 = (n1 > 0) ? n1 : -n1;
    n2 = (n2 > 0) ? n2 : -n2;

    while (n1 != n2)
    {
        if (n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("GCD = %d", n1);

    return 0;
}