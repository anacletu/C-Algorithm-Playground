#include <stdio.h>
#include <time.h>
#include "../../mathematical/karatsuba.h"

void printResult(long long result, long long num1, long long num2)
{
    printf("Product of %lld and %lld is %lld.\n", num1, num2, result);
}

void runKaratsubaTest(long long num1, long long num2, char *label)
{
    clock_t start = clock();
    long long result = karatsuba(num1, num2);
    clock_t end = clock();
    double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("%s\n", label);
    printResult(result, num1, num2);
    printf("Runtime: %f seconds\n\n", cpu_time_used);
}

int main()
{
    // Test case 1: Regular numbers
    long long num1 = 123456789;
    long long num2 = 987654321;

    runKaratsubaTest(num1, num2, "Test case 1: Regular numbers");

    // Test case 2: Large numbers
    long long num3 = 123456789123456789;
    long long num4 = 987654321987654321;

    runKaratsubaTest(num3, num4, "Test case 2: Large numbers");

    // Test case 3: One number is 0
    long long num5 = 0;
    long long num6 = 987654321;

    runKaratsubaTest(num5, num6, "Test case 3: One number is 0");

    return 0;
}