#include "quick_sort.h"

/**
 * Problem:
 * Implement the Quick Sort algorithm.
 *
 * Quick Sort:
 *   - Choose a "pivot" element from the array and partition the other elements into two subarrays
 *     according to whether they are less than or greater than the pivot.
 *   - Recursively sort the subarrays.
 */

void quickSort(int arr[], int low, int high)
{
    if (low >= high || arr == NULL)
        return; // Nothing to sort

    int pivotIdx = partition(arr, low, high);
    quickSort(arr, low, pivotIdx - 1);
    quickSort(arr, pivotIdx + 1, high);
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int idx = low - 1;

    for (int i = low; i < high; i++)
    {
        if (arr[i] <= pivot)
        {
            idx++;
            int tmp = arr[i];
            arr[i] = arr[idx];
            arr[idx] = tmp;
        }
    }

    idx++;
    arr[high] = arr[idx];
    arr[idx] = pivot;

    return idx;
}
