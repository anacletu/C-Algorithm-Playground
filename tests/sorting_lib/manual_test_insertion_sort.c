#include <stdio.h>
#include <time.h>
#include "../../sorting/insertion_sort.h"

void printArray(int array[], size_t size, const char *label)
{
    printf("%s:\n", label);
    for (int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n\n");
}

void runInsertionSortTest(int array[], size_t size, const char *label)
{
    // Copy the array for sorting (to keep the original for comparison)
    int sortedArray[size];
    for (size_t i = 0; i < size; i++)
    {
        sortedArray[i] = array[i];
    }

    // Measure runtime for insertion sort
    clock_t start = clock();
    insertionSort(sortedArray, size);
    clock_t end = clock();
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Print the sorted array and runtime
    printf("%s (Insertion Sort):\n", label);
    printArray(sortedArray, size, "Sorted Array");
    printf("Runtime: %f seconds\n\n", cpu_time_used);
}

int main()
{
    // Test case 1: Regular array
    int array1[] = {64, 25, 12, 22, 11, 1, 0, 48, 100};
    size_t size1 = sizeof(array1) / sizeof(array1[0]);

    runInsertionSortTest(array1, size1, "Test Case 1");

    // Test case 2: Empty array
    int emptyArray[] = {};
    size_t sizeEmpty = sizeof(emptyArray) / sizeof(emptyArray[0]);

    runInsertionSortTest(emptyArray, sizeEmpty, "Test Case 2");

    // Test case 3: Array with a single element
    int singleElementArray[] = {42};
    size_t sizeSingle = sizeof(singleElementArray) / sizeof(singleElementArray[0]);

    runInsertionSortTest(singleElementArray, sizeSingle, "Test Case 3");

    // Test case 4: Already sorted array
    int sortedArray[] = {1, 2, 3, 4, 5};
    size_t sizeSorted = sizeof(sortedArray) / sizeof(sortedArray[0]);

    runInsertionSortTest(sortedArray, sizeSorted, "Test Case 4");

    // Test case 5: Array with duplicate elements
    int duplicateArray[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    size_t sizeDuplicate = sizeof(duplicateArray) / sizeof(duplicateArray[0]);

    runInsertionSortTest(duplicateArray, sizeDuplicate, "Test Case 5");

    return 0;
}