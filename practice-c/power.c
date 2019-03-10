#include <stdio.h>
int power(int base, int n);
int main()
{
    printf("2^3 = %d\n", power(2, 3));
    return 0;
}

int power(int base, int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= base;
    }
    return result;
}