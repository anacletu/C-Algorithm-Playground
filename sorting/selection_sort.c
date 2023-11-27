#include "selection_sort.h"

/**
 * Problem:
 * Implement the Selection Sort algorithm.
 *
 * Selection Sort:
 *   - Divide the array into a sorted and an unsorted region.
 *   - In each iteration, find the minimum element from the unsorted region and swap it with the first
 *     element of the unsorted region, extending the sorted region.
 */

void selectionSort(int arr[], size_t size)
{
    if (arr == NULL || size <= 1)
        return; // Nothing to sort

    int key;
    int index;

    for (int i = 0; i < size - 1; i++)
    {
        key = arr[i];
        index = i; // Initialize index to i

        // Find the index of the minimum element in the unsorted region
        for (int j = 1 + i; j < size; j++)
        {
            if (arr[j] < key)
            {
                key = arr[j];
                index = j;
            }
        }

        // Swap the minimum element with the first element of the unsorted region
        if (index != i)
        {
            arr[index] = arr[i];
            arr[i] = key;
        }
    }
}
