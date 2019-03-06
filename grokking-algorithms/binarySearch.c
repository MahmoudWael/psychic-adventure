#include <stdio.h>
int main()
{
#define ARRAY_LENGTH 10

    int arr[ARRAY_LENGTH];
    int low, high, guess, target, mid, result, steps;

    target = 18;
    steps = 0; //to count number of steps taken to find the result

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        arr[i] = i * 2;
    }

    // arr = [0, 2, 4, 6, 8, 10, 12, 14, 16, 18]  and it's sorted
    int binary_search(int arr[], int target)
    {
        low = 0;
        high = ARRAY_LENGTH - 1;
        guess = 0;
        while (low <= high)
        {
            mid = (low + high) / 2;
            guess = arr[mid];
            ++steps;
            if (guess == target)
            {
                return mid;
            }
            if (guess > target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return -1;
    }

    result = binary_search(arr, target);
    (result == -1) ? printf("Item not found in array\n") : printf("Item found at position %d\n", result);
    printf("Steps = %d\n", steps);

    return 0;
}