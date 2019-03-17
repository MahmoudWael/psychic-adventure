#include <stdio.h>
void selectionSort(int arr[], int n);
#define ARRAY_LENGTH 5
int main()
{
    int arr[ARRAY_LENGTH] = {5, 3, 6, 2, 10};
    selectionSort(arr, ARRAY_LENGTH);
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
}

void selectionSort(int arr[], int n)
{
    int smallest, temp;

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        smallest = i;
        for (int j = i + 1; j < ARRAY_LENGTH; j++)
        {
            if (arr[i] > arr[j])
            {
                smallest = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}