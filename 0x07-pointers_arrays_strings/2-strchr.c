#include "main.h"

/**
 * _strchr - string character locator
 * @s: String
 * @c: character to search
 * Return: pointer to the first occurence of the character c in the string s
 **/

char *_strchr(char *s, char c)
{

	while (*s != '\0') /*WHILE IS declared*/
	{
		if  (*s == c) /*if s == c*/
		{
			return (s); /*return s*/
		}

		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	
	return (0); /* values null*/
}
