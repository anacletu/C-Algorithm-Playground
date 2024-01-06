#ifndef INVERSIONS_H
#define INVERSIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// Function declaration for Inversions
void divideArray(int arr[], size_t length, long *inversions);
void mergeAndCount(int arr[], int arrL[], int arrR[], size_t nL, size_t nR, long *inversions);

#endif // INVERSIONS_H