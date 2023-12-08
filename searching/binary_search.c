#include "binary_search.h"

/**
 * Problem:
 * Implement the Binary Search algorithm.
 *
 * Binary Search:
 *   - Search for a given element in a sorted array.
 *   - Return the index of the element if found, or -1 if not found.
 */

int binarySearch(int arr[], int low, int high, int target)
{
    if (arr == NULL || low > high)
        return -1;

    int middle = (low + high) / 2;

    if (arr[middle] == target)
        return middle;
    else if (arr[middle] > target)
    {
        high = middle - 1;
        return binarySearch(arr, low, high, target);
    }
    else
    {
        low = middle + 1;
        return binarySearch(arr, low, high, target);
    }
}