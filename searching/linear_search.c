#include <stdio.h>

/**
 * Problem:
 * Implement the Linear Search algorithm.
 *
 * Linear Search:
 *   - Search for a given element in an array sequentially.
 *   - Return the index of the element if found, or -1 if not found.
 */

int linearSearch(int arr[], int n, int target);

int main()
{
    // Example usage
    int array[] = {2, 5, 8, 12, 16, 23, 38, 42, 49, 51};
    int target = 16;
    int size = sizeof(array) / sizeof(array[0]);

    // Perform linear search
    int result = linearSearch(array, size, target);

    // Display the result
    if (result != -1)
    {
        printf("Element %d found at index %d\n", target, result);
    }
    else
    {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}

int linearSearch(int arr[], int n, int target)
{
    // Iterate through the array
    for (int i = 0; i < n; ++i)
    {
        // Check if the current element is equal to the target
        if (arr[i] == target)
        {
            // Return the index if found
            return i;
        }
    }

    // Return -1 if the target is not found in the array
    return -1;
}