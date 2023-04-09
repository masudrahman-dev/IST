#include <stdio.h>
int main()
{
    char op;
    double first, second;
    printf("Enter an operator (+, - , *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);
    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        // IF   operator does not match any case
    default:
        printf("Error! operator is not correct");
        break;
    }
    return 0;
}