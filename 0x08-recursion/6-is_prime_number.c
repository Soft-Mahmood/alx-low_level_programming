#include "main.h"

/* 
 * a_prime 
 * recurses to find out the multiples 
 * of number n
 * by dividing numbers from 2
 */

int a_prime(int n, int i)
{
	if (i >= n)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (a_prime(n, i + 1)
}

/** 
 * this function returns 
 * 1 if n is prime, and 
 * 0 if n is not prime
 *
 */

int is_prime_number(int n);
{
	if (n < 0)
		return (0);
	return (a_prime(n, 2);
}
