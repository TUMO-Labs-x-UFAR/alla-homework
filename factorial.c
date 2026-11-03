#include <stdio.h>

int factorial(int n)
{
    int result = 1;

    for (int i = 1; i <= n; i++)
        result *= i;

    return result;
}

int main(void)
{
    int n = 5;
    printf("Factorial: %d\n", factorial(n));
    return 0;
}
