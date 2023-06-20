#include "variadic_functions.h"

/*
 * this function returns the sum of all its parameters.
 * @n is the first int
 * sum is the sum returned after the function executes.
 **/


int sum_them_all(const unsigned int n, ...)
{
	if n == 0;
		return 0;

	va_list sp;
	int i, sum;

	va_start (sp, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg (sp, int);

	va_end (sp);
	
	return (sum);
}
