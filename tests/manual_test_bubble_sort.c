#include <stdio.h>
#include "../sorting/bubble_sort.h"

void printArray(int array[], int size, const char *label)
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
    // Example usage
    int array1[] = {64, 25, 12, 22, 11, 1, 0, 48, 100};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    printArray(array1, size1, "Original Array");
    bubbleSort(array1, size1);
    printArray(array1, size1, "Sorted Array");

    // Test case 1: Empty array
    int emptyArray[] = {};
    int sizeEmpty = sizeof(emptyArray) / sizeof(emptyArray[0]);

    printArray(emptyArray, sizeEmpty, "Empty Array");
    bubbleSort(emptyArray, sizeEmpty);
    printArray(emptyArray, sizeEmpty, "Sorted Empty Array");

    // Test case 2: Array with a single element
    int singleElementArray[] = {42};
    int sizeSingle = sizeof(singleElementArray) / sizeof(singleElementArray[0]);

    printArray(singleElementArray, sizeSingle, "Single Element Array");
    bubbleSort(singleElementArray, sizeSingle);
    printArray(singleElementArray, sizeSingle, "Sorted Single Element Array");

    // Test case 3: Already sorted array
    int sortedArray[] = {1, 2, 3, 4, 5};
    int sizeSorted = sizeof(sortedArray) / sizeof(sortedArray[0]);

    printArray(sortedArray, sizeSorted, "Already Sorted Array");
    bubbleSort(sortedArray, sizeSorted);
    printArray(sortedArray, sizeSorted, "Sorted Already Sorted Array");

    // Test case 4: Array with duplicate elements
    int duplicateArray[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int sizeDuplicate = sizeof(duplicateArray) / sizeof(duplicateArray[0]);

    printArray(duplicateArray, sizeDuplicate, "Array with Duplicates");
    bubbleSort(duplicateArray, sizeDuplicate);
    printArray(duplicateArray, sizeDuplicate, "Sorted Array with Duplicates");

    return 0;
}