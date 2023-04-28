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
        int n = 5;
        char result_arr[n];
        char M_arr[n];
        scanf("%s", M_arr);
        char G_arr[n];
        scanf("%s", G_arr);

        for (int i = 0; i < n; i++)
        {
            if (M_arr[i] == G_arr[i])
            {
                result_arr[i] = 'G';
            }
            else
            {
                result_arr[i] = 'B';
            }
        }
        printf("%s\n", result_arr);
    }

    return 0;
}
