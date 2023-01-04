#include "main.h"
/**
  *helperFunction - checks if sqrt of number exists
  *@num: number.
  *@pSqrt: possible sqrt of number.
  *
  *Return: sqrt of number at -1 for error.
  */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1);
	}
}
	int _sqrt_recursion(int n) /*returns the natural square root of a number*/
	{
	if (n < 0)
	return (-1);
	else
	return (helperFunction(n, 0));
	}
