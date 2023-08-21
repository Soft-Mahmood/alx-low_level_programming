#include <stdio.h>

/**
 * add - adds two numbers
 * @a: is the first number
 * @b: is the second number 
 * Return: the sum
 */
int add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * sub - subtracts two numbers
 * @a: is the first number
 * @b: is the second number
 * Return: the difference
 */
int sub(int a, int b)
{
        int diff;

        diff = a - b;
        return (diff);
}

/**
 * mul - multiplies two numbers
 * @a: is the first number
 * @b: is the second number
 * Return: the product
 */
int mul(int a, int b)
{
        int pdt;

        pdt = a * b;
        return (pdt);
}

/**
 * div - divides two numbers
 * @a: is the first number
 * @b: is the second number
 * Return: the quotient
 */
int div(int a, int b)
{
        int sum;

        sum = a / b;
        return (sum);
}
/**
 * mod - adds two numbers
 * @a: is the first number
 * @b: is the second number
 * Return: the sum
 */
int mod(int a, int b)
{
        int sum;

        sum = a % b;
        return (sum);
}
