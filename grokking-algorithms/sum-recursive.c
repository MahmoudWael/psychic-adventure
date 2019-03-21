#include <stdio.h>
int sum(int arr[], int n);
#define ARRAY_LENGTH 5
int main()
{
    int arr[ARRAY_LENGTH] = {5, 8, 9, 4, 7};
    int result = sum(arr, ARRAY_LENGTH - 1);
    printf("%d\n", result);
    return 0;
}

int sum(int arr[], int n)
{
    if (n < 0)
    {
        return 0;
    }
    return arr[n] + sum(arr, --n);
}