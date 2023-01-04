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
	
		return (pSqrt);

	else if ((num * num) < pSqrt)
		return (_evaluate(num + 1, pSqrt));
	
else if (num * num == pSqrt)	/*Condition*/
	return (1)
	  return (-1);
	
	  return (-1);
	}
