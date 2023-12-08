#include "../../sorting/quick_sort.h"

void printArray(int array[], size_t size, const char *label)
{
    printf("%s:\n", label);
    for (int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}

void runQuickSortTest(int array[], size_t size, const char *label)
{
    // Copy the array for sorting (to keep the original for comparison)
    int sortedArray[size];
    for (size_t i = 0; i < size; i++)
    {
        sortedArray[i] = array[i];
    }

    // Measure runtime for quicksort
    clock_t start = clock();
    quickSort(sortedArray, 0, size - 1);
    clock_t end = clock();
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Print the sorted array and runtime
    printf("%s\n", label);
    printArray(array, size, "Original Array");
    printArray(sortedArray, size, "Sorted Array");
    printf("Runtime: %f seconds\n\n\n", cpu_time_used);
}

int main()
{
    // Test case 1: Regular array
    int array1[] = {49, 23, 15, 37, 5, 42, 12, 29, 8, 18,
                    35, 47, 10, 3, 21, 14, 38, 7, 44, 2,
                    33, 20, 45, 13, 28, 1, 46, 19, 36, 9,
                    24, 30, 43, 22, 6, 16, 39, 11, 26, 4,
                    32, 17, 50, 27, 41, 34, 48, 25, 31, 40};
    size_t size1 = sizeof(array1) / sizeof(array1[0]);

    runQuickSortTest(array1, size1, "Test case 1: Regular array");

    // Test case 2: Empty array
    int emptyArray[] = {};
    size_t sizeEmpty = sizeof(emptyArray) / sizeof(emptyArray[0]);

    runQuickSortTest(emptyArray, sizeEmpty, "Test case 2: Empty array");

    // Test case 3: Array with a single element
    int singleElementArray[] = {42};
    size_t sizeSingle = sizeof(singleElementArray) / sizeof(singleElementArray[0]);

    runQuickSortTest(singleElementArray, sizeSingle, "Test case 3: Array with a single element");

    // Test case 4: Already sorted array
    int sortedArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                         11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                         21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                         31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                         41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    size_t sizeSorted = sizeof(sortedArray) / sizeof(sortedArray[0]);

    runQuickSortTest(sortedArray, sizeSorted, "Test case 4: Already sorted array");

    // Test case 5: Array with duplicate elements
    int duplicateArray[] = {25, 10, 5, 20, 15, 5, 10, 25, 15, 20,
                            1, 3, 2, 4, 1, 3, 2, 4, 1, 3,
                            6, 8, 7, 9, 6, 8, 7, 9, 6, 8,
                            11, 13, 12, 14, 11, 13, 12, 14, 11, 13,
                            16, 18, 17, 19, 16, 18, 17, 19, 16, 18};
    size_t sizeDuplicate = sizeof(duplicateArray) / sizeof(duplicateArray[0]);

    runQuickSortTest(duplicateArray, sizeDuplicate, "Test case 5: Array with duplicate elements");

    return 0;
}
