#include "main.h"

/**
 * _strstr - Entry Point
 * @haystack: Variable
 * @needle: Variable
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, a;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (a = 0; needle[a] != '\0'; a++)
			{
				if (haystack[i + a] != needle[a])
				{
					break;
				}
			}
			if (needle[a] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return ('\0');
}
