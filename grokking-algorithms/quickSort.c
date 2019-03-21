#include <stdio.h>
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
void swap(int *a, int *b);
#define ARRAY_LENGTH 5
int main()
{
    int arr[ARRAY_LENGTH] = {5, 8, 9, 4, 7};
    quickSort(arr, 0, ARRAY_LENGTH - 1);
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int p = partition(arr, low, high);
        quickSort(arr, low, p - 1);
        quickSort(arr, p + 1, high);
    }
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int smallerIndex = (low - 1);
    for (int i = 0; i < high - 1; i++)
    {
        if (arr[i] <= pivot)
        {
            smallerIndex++;
            swap(&arr[i], &arr[smallerIndex]);
        }
    }
    swap(&arr[smallerIndex + 1], &arr[high]);
    return (smallerIndex + 1);
}

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
