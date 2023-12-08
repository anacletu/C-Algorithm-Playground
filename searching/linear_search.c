#include "linear_search.h"

/**
 * Problem:
 * Implement the Linear Search algorithm.
 *
 * Linear Search:
 *   - Search for a given element in an array sequentially.
 *   - Return the index of the element if found, or -1 if not found.
 */

int linearSearch(int arr[], size_t length, int target)
{
    if (arr == NULL)
        return -1;

    for (size_t i = 0; i < length; i++)
    {
        if (arr[i] == target)
        {
            return i; // returning the index where the target is found
        }
    }

    return -1; // target not found
}