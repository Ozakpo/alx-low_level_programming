#include "main.h"
/**
  *_evaluate - checks if sqrt of number exists
  *@num: number.
  *@pSqrt: possible sqrt of number.
  *
  *Return: sqrt of number evaluated.
  */
int _evaluate(int num, int pSqrt)
{
	if (pSqrt == 0 || pSqrt == 1)
	{
		return (pSqrt);
	else if ((num * num) < pSqrt)
		return (_evaluate(num + 1);
	else 
		return (helperFunction(num, pSqrt + 1));
	}
}
	/* _sqrt_recursion - returns the natural square root of a number
	*@n: number to find
	*
	*Return: squareroot of n.
        *-1 if n does not have a natural sqrt.
        */
	int _sqrt_recursion(int n)
{
	if (n < 0)
	  return (-1);
	else
	  return (_evaluate(n, 0));
	}
