// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
//     int p1, p2, p3, p4, count = 0;
//     scanf("%d%d%d%d", &p1, &p2, &p3, &p4);
//     if (p1 >= 10)
//     {
//         count++;
//     }
//     if (p2 >= 10)
//     {
//         count++;
//     }
//     if (p3 >= 10)
//     {
//         count++;
//     }
//     if (p4 >= 10)
//     {
//         count++;
//     }
//     printf("%d\n", count);
//     return 0;
// }
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n = 4, count = 0, p;
    while (n--)
    {
        scanf("%d", &p);
        if (p >= 10)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
