#include <stdio.h>
int main()
{
    int n;
    scanf("%d,&n");
    if (n >= 0 && n <= 100)
    {
        if (n % 3 == 0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}