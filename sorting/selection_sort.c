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
        for (int j = 1 + i; j < size; j++)
        {
            if (arr[j] < key)
            {
                key = arr[j];
                index = j;
            }
        }
        if (key != arr[i])
        {
            arr[index] = arr[i];
            arr[i] = key;
        }
    }
}
