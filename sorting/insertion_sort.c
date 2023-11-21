#include "insertion_sort.h"

/**
 * Problem:
 * Implement the Insertion Sort algorithm.
 *
 * Insertion Sort:
 *   - Build a sorted array one element at a time by repeatedly taking elements from the unsorted part
 *     and inserting them into their correct position in the sorted part.
 */

void insertionSort(int arr[], size_t size)
{
    if (arr == NULL || size <= 1)
        return; // Nothing to sort

    for (int i = 1; i < size; i++)
    {
        int current = arr[i];
        int previous = i - 1;

        while (previous >= 0 && arr[previous] > current)
        {
            arr[previous + 1] = arr[previous];
            previous--;
        }
        arr[previous + 1] = current;
    }
}
