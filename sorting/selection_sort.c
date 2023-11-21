#include "selection_sort.h"

/**
 * Problem:
 * Implement the Insertion Sort algorithm.
 *
 * Insertion Sort:
 *   - Build a sorted array one element at a time by repeatedly taking elements from the unsorted part
 *     and inserting them into their correct position in the sorted part.
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
