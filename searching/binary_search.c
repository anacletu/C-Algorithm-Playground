#include <stdio.h>

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
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // Element not found
}