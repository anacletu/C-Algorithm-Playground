#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <stddef.h>

// Function declaration for Merge Sort
void mergeSort(int arr[], size_t length);
void merge(int arr[], int arrL[], int arrR[], size_t nL, size_t nR);

#endif // MERGE_SORT_H