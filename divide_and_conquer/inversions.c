#include "inversions.h"

/**
 * Problem:
 * Implement an inversion counting algorithm.
 *
 * Inversion Counting Algorithm:
 *   - A divide and conquer algorithm that counts the number of inversions in an array.
 *   - It efficiently determines how far the array is from being sorted.
 */

void divideArray(int arr[], size_t length, long *inversions)
{
    if (arr == NULL || length == 1)
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

    divideArray(arrL, middle, inversions);
    divideArray(arrR, length - middle, inversions);
    mergeAndCount(arr, arrL, arrR, middle, length - middle, inversions);

    free(arrL);
    free(arrR);
}

void mergeAndCount(int arr[], int arrL[], int arrR[], size_t nL, size_t nR, long *inversions)
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
            if (nL == 1)
            {
                *inversions += 1;    
            }
            else
            {
                *inversions += (nL - l);
            }
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