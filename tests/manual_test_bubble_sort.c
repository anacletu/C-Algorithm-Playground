#include <stdio.h>
#include "../sorting/bubble_sort.h"

int main()
{
    int arr1[] = {5, 3, 7, 1, 8};
    size_t size1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Original array: ");
    for (size_t i = 0; i < size1; ++i)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    bubbleSort(arr1, size1);

    printf("Sorted array: ");
    for (size_t i = 0; i < size1; ++i)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    // Add more test cases if needed

    return 0;
}
