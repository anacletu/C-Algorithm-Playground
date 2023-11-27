#include "merge_sort.h"

/**
 * Problem:
 * Implement the Merge Sort algorithm.
 *
 * Merge Sort:
 *   - Divide the unsorted array into n subarrays, each containing one element.
 *   - Repeatedly merge subarrays to produce new sorted subarrays until there is only one subarray remaining.
 */

void merge(int arr[], int arrL[], int arrR[], size_t nL, size_t nR)
{
    int l = 0;
    int r = 0;
    int idx = 0;

    while (l < nL && r < nR)
    {
        if (arrL[l] <= arrR[r])
        {
            arr[idx] = arrL[l];
            l++;
        }
        else
        {
            arr[idx] = arrR[r];
            r++;
        }
        idx++;
    }
    while (l < nL)
    {
        arr[idx] = arrL[l];
        l++;
        idx++;
    }
    while (r < nR)
    {
        arr[idx] = arrR[r];
        r++;
        idx++;
    }
}

void mergeSort(int arr[], size_t length)
{
    if (arr == NULL || length <= 1)
        return;

    size_t middle = length / 2;
    int *arrL = malloc(middle * sizeof(int));
    int *arrR = malloc((length - middle) * sizeof(int));

    if (arrL == NULL || arrR == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }

    for (size_t i = 0; i < middle; i++)
    {
        arrL[i] = arr[i];
    }

    for (size_t i = middle; i < length; i++)
    {
        arrR[i - middle] = arr[i];
    }

    mergeSort(arrL, middle);
    mergeSort(arrR, length - middle);
    merge(arr, arrL, arrR, middle, length - middle);

    free(arrL);
    free(arrR);
}