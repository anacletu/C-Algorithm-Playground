#include <stdio.h>
#include "../../sorting/quick_sort.h"

void printArray(int array[], size_t size, const char *label)
{
    printf("%s:\n", label);
    for (int i = 0; i < size; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n\n");
}

int main()
{
    // Test case 1: Regular array
    int array1[] = {64, 25, 12, 22, 11, 1, 0, 48, 100};
    size_t size1 = sizeof(array1) / sizeof(array1[0]);

    printArray(array1, size1, "Original Array");
    quickSort(array1, 0, size1 - 1);
    printArray(array1, size1, "Sorted Array");

    // Test case 2: Empty array
    int emptyArray[] = {};
    size_t sizeEmpty = sizeof(emptyArray) / sizeof(emptyArray[0]);

    printArray(emptyArray, sizeEmpty, "Empty Array");
    quickSort(emptyArray, 0, sizeEmpty - 1);
    printArray(emptyArray, sizeEmpty, "Sorted Empty Array");

    // Test case 3: Array with a single element
    int singleElementArray[] = {42};
    size_t sizeSingle = sizeof(singleElementArray) / sizeof(singleElementArray[0]);

    printArray(singleElementArray, sizeSingle, "Single Element Array");
    quickSort(singleElementArray, 0, sizeSingle - 1);
    printArray(singleElementArray, sizeSingle, "Sorted Single Element Array");

    // Test case 4: Already sorted array
    int sortedArray[] = {1, 2, 3, 4, 5};
    size_t sizeSorted = sizeof(sortedArray) / sizeof(sortedArray[0]);

    printArray(sortedArray, sizeSorted, "Already Sorted Array");
    quickSort(sortedArray, 0, sizeSorted - 1);
    printArray(sortedArray, sizeSorted, "Sorted Already Sorted Array");

    // Test case 5: Array with duplicate elements
    int duplicateArray[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    size_t sizeDuplicate = sizeof(duplicateArray) / sizeof(duplicateArray[0]);

    printArray(duplicateArray, sizeDuplicate, "Array with Duplicates");
    quickSort(duplicateArray, 0, sizeDuplicate - 1);
    printArray(duplicateArray, sizeDuplicate, "Sorted Array with Duplicates");

    return 0;
}
