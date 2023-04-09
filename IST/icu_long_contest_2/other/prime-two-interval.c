// // #include <stdio.h>
// // int main()
// // {
// //     int low, high, i, flag;
// //     scanf("%d %d", &low, &high);
// //     printf("prime numbers between %d and %d\n", low, high);
// //     // iteration until low is not equal to high
// //     while (low < high)
// //     {
// //         flag = 0;
// //         // ignore numbers less than 2
// //         if (low <= 1)
// //         {
// //             ++low;
// //             continue;
// //             /* code */
// //         }
// //         // if low is non-prime number. flag will be 1
// //         for (i = 0; i < low / 2; i++)
// //         {
// //             if (low % i == 0)
// //             {
// //                 flag = 0;
// //                 break;
// //             }
// //         }
// //         if (flag == 0)
// //         {
// //             printf("%d\n", low);
// //             // to check prime for the next number
// //             // increase low by 1
// //             ++low;
// //         }
// //     }

// //     return 0;
// // }
// // #include <stdio.h>

// // int main()
// // {
// //     int low, high, i, flag;
// //     printf("Enter two numbers(intervals): ");
// //     scanf("%d %d", &low, &high);
// //     printf("Prime numbers between %d and %d are: ", low, high);

// //     // iteration until low is not equal to high
// //     while (low < high)
// //     {
// //         flag = 0;

// //         // ignore numbers less than 2
// //         if (low <= 1)
// //         {
// //             ++low;
// //             continue;
// //         }

// //         // if low is a non-prime number, flag will be 1
// //         for (i = 2; i <= low / 2; ++i)
// //         {

// //             if (low % i == 0)
// //             {
// //                 flag = 1;
// //                 break;
// //             }
// //         }

// //         if (flag == 0)
// //             printf("%d ", low);

// //         // to check prime for the next number
// //         // increase low by 1
// //         ++low;
// //     }

// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     int low, high, i, flag, temp;
//     printf("Enter two numbers(intervals): \n");
//     scanf("%d %d", &low, &high);
//     // swap numbers if low is greater than high
//     if (low > high)
//     {
//         temp = low;
//         low = high;
//         high = temp;
//     }
//     printf("prime numbers between %d and %d are: \n", low, high);
//     while (low < high)
//     {
//         flag = 0;
//         // ignore numbers less than 2
//         if (low <= 1)
//         {
//             ++low;
//             continue;
//         }
//         for (i = 0; i <= low / 2; i++)
//         {
//             flag = 1;
//             break;
//         }
//         if (flag == 0)
//         {
//             printf("%d\n", low);
//             ++low;
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int low, high, i, flag, temp;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    // swap numbers if low is greather than high
    if (low > high)
    {
        temp = low;
        low = high;
        high = temp;
    }

    printf("Prime numbers between %d and %d are: ", low, high);
    while (low < high)
    {
        flag = 0;

        // ignore numbers less than 2
        if (low <= 1)
        {
            ++low;
            continue;
        }

        for (i = 2; i <= low / 2; ++i)
        {
            if (low % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", low);
        ++low;
    }

    return 0;
}