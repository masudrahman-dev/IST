#include <stdio.h>
int main()
{
    int p1, p2, p3, p4, total;
    scanf("%d %d %d %d", &p1, &p2, &p3, &p4);
    if (p1 >= 10)
    {
        total++;
    }
    if (p2 >= 10)
    {
        total++;
    }
    if (p3 >= 10)
    {
        total++;
    }
    if (p4 >= 10)
    {
        total++;
    }
    printf("%d\n", total);

    return 0;
}
