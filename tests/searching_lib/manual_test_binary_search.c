#include "../../searching/binary_search.h"

void printResult(int result, int target)
{
    if (result != -1)
    {
        printf("Target %d found at index %d.\n", target, result);
    }
    else
    {
        printf("Target %d not found in the array.\n", target);
    }
}

void runBinarySearchTest(int arr[], int size, int target, char *label)
{
    clock_t start = clock();
    int result = binarySearch(arr, 0, size - 1, target);
    clock_t end = clock();
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("%s\n", label);
    printResult(result, target);
    printf("Runtime: %f seconds\n\n", cpu_time_used);
}

int main()
{
    // Test case 1: Regular sorted array
    int array1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                    11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                    21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                    31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                    41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int target1 = 7;

    runBinarySearchTest(array1, size1, target1, "Test case 1: Regular sorted array");

    // Test case 2: Empty array
    int emptyArray[] = {};
    int sizeEmpty = sizeof(emptyArray) / sizeof(emptyArray[0]);
    int targetEmpty = 42;

    runBinarySearchTest(emptyArray, sizeEmpty, targetEmpty, "Test case 2: Empty array");

    // Test case 3: Array with a single element
    int singleElementArray[] = {42};
    int sizeSingle = sizeof(singleElementArray) / sizeof(singleElementArray[0]);
    int targetSingle = 42;

    runBinarySearchTest(singleElementArray, sizeSingle, targetSingle, "Test case 3: Array with a single element");

    // Test case 4: Target not in the array
    int array2[] = {49, 23, 15, 37, 5, 42, 12, 29, 8, 18,
                    35, 47, 10, 3, 21, 14, 38, 7, 44, 2,
                    33, 20, 45, 13, 28, 1, 46, 19, 36, 9,
                    24, 30, 43, 22, 6, 16, 39, 11, 26, 4,
                    32, 17, 50, 27, 41, 34, 48, 25, 31, 40};
    int size2 = sizeof(array2) / sizeof(array2[0]);
    int target2 = 60;

    runBinarySearchTest(array2, size2, target2, "Test case 4: Target not in the array");

    return 0;
}