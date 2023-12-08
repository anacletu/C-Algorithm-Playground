#include <stdio.h>
#include <math.h>

/**
 * Problem:
 * Implement the Karatsuba algorithm.
 *
 * Karatsuba Algorithm:
 *   - A fast multiplication algorithm that uses a divide and conquer approach.
 *   - It multiplies two n-digit numbers in less than O(n^2) elementary steps.
 */

int countDigits(int num) 
{
    int count = 0;
    while (num != 0) 
    {
        num /= 10;
        count++;
    }
    return count;
}

long long karatsuba(long long x, long long y)
{
	if (x <= 10 || y <= 10)
		return x * y;

	else
	{
		int len = fmax(countDigits(x), countDigits(y));
		int half = len / 2;
		long long a = x / pow(10, half);
		long long b = x % (long long)pow(10, half);
		long long c = y / pow(10, half);
		long long d = y % (long long)pow(10, half);

		long long ac = karatsuba(a, c);
		long long bd = karatsuba(b, d);
		long long ad_plus_bc = karatsuba(a+b, c+d) - ac - bd;

		return (ac * pow(10, 2*half)) + (ad_plus_bc * pow(10, half)) + bd;
	}
}

