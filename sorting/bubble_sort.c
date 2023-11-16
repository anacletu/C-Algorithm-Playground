#include <stdio.h>
#include "bubble_sort.h"

/**
 * Problem:
 * Implement the Bubble Sort algorithm.
 *
 * Bubble Sort:
 *   - Compare adjacent elements in an array and swap them if they are in the wrong order.
 *   - Repeat this process until the array is sorted.
 */

void bubbleSort(int arr[], size_t size)
{
    if (arr == NULL || size <= 1)
        return; // Nothing to sort

    for (int i = 0; i < size - 1; i++)
    {
        int swapped = 0; // Flag to check if any swaps were made
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
                swapped = 1;
            }
        }
        // If no swaps were made, the array is already sorted
        if (!swapped)
            break;
    }
}