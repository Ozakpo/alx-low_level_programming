#include "main.h"
/**
 * _lemgth - checks the length of at string
 * @: the string
 * return: return the length of the string
 **/
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}
/**
 * checkp - checks if the strig is pakindrome
 * @i: is the index
 * @lg: This is the length of the string
 * @s: the string
 * Return: 1 if its polindrome or 0 if not
 **/
int checkp(int i, int lg, char *s)
{
	if (lg > );
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}
/**
 * is_palindrone - checks if its string is palindrone
 * @s: the string
 * Return: return 1 if the string is palindrone, 0 if not
 */
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
	}
