#include <stdio.h>
#include <time.h>
#include "../../sorting/selection_sort.h"

void printArray(int array[], size_t size, const char *label)
{
    printf("%s:\n", label);
    for (int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n\n");
}

void runSelectionSortTest(int array[], size_t size, const char *label)
{
    clock_t start, end;

    // Measure the runtime of selection sort
    start = clock();
    selectionSort(array, size);
    end = clock();

    // Calculate the elapsed time in milliseconds
    double elapsedTime = ((double)(end - start) / CLOCKS_PER_SEC) * 1000.0;

    // Print the sorted array and the runtime
    printArray(array, size, label);
    printf("Selection Sort took %.6f milliseconds.\n\n", elapsedTime);
}

int main()
{
    // Test case 1: Regular array
    int array1[] = {64, 25, 12, 22, 11, 1, 0, 48, 100};
    size_t size1 = sizeof(array1) / sizeof(array1[0]);

    runSelectionSortTest(array1, size1, "Original Array");

    // Test case 2: Empty array
    int emptyArray[] = {};
    size_t sizeEmpty = sizeof(emptyArray) / sizeof(emptyArray[0]);

    runSelectionSortTest(emptyArray, sizeEmpty, "Empty Array");

    // Test case 3: Array with a single element
    int singleElementArray[] = {42};
    size_t sizeSingle = sizeof(singleElementArray) / sizeof(singleElementArray[0]);

    runSelectionSortTest(singleElementArray, sizeSingle, "Single Element Array");

    // Test case 4: Already sorted array
    int sortedArray[] = {1, 2, 3, 4, 5};
    size_t sizeSorted = sizeof(sortedArray) / sizeof(sortedArray[0]);

    runSelectionSortTest(sortedArray, sizeSorted, "Already Sorted Array");

    // Test case 5: Array with duplicate elements
    int duplicateArray[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    size_t sizeDuplicate = sizeof(duplicateArray) / sizeof(duplicateArray[0]);

    runSelectionSortTest(duplicateArray, sizeDuplicate, "Array with Duplicates");

    return 0;
}
