#include "../../divide_and_conquer/inversions.h"

void printArray(const int arr[], size_t length)
{
    printf("[ ");
    for (size_t i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

// Function to run tests for the inversion counting algorithm
void runInversionTests()
{
    // Test Case 1: Array with no inversions
    printf("Test Case 1: Array with no inversions\n");
    int arr1[] = {1, 2, 3, 4, 5};
    size_t length1 = sizeof(arr1) / sizeof(arr1[0]);
    long inversions1 = 0;

    // Print the original array
    printf("Original Array: ");
    printArray(arr1, length1);

    // Run the inversion counting algorithm
    divideArray(arr1, length1, &inversions1);

    // Print the sorted array and inversion count
    printf("Sorted Array: ");
    printArray(arr1, length1);
    printf("Inversion Count: %ld\n", inversions1);

    // Test Case 2: Array with inversions
    printf("\nTest Case 2: Array with inversions\n");
    int arr2[] = {5, 2, 4, 1, 3};
    size_t length2 = sizeof(arr2) / sizeof(arr2[0]);
    long inversions2 = 0;

    // Print the original array
    printf("Original Array: ");
    printArray(arr2, length2);

    // Run the inversion counting algorithm
    divideArray(arr2, length2, &inversions2);

    // Print the sorted array and inversion count
    printf("Sorted Array: ");
    printArray(arr2, length2);
    printf("Inversion Count: %ld\n", inversions2);
}

int main()
{
    // Run the inversion counting algorithm tests
    runInversionTests();

    return 0;
}