#include "main.h"

/**
 * rev_string - Entry Point
 * @s: Varaible
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i, len;

	char t;

	for (i = 0; i < (len / 2); i++)
	{
		t = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = t;
	}
}
