#include <stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;
    printf("int: %zu\n", sizeof(intType));
    printf("int: %zu\n", sizeof(floatType));
    printf("int: %zu\n", sizeof(doubleType));
    printf("int: %zu\n", sizeof(charType));
    return 0;
}
