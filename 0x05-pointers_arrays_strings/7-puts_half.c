#include"stdio.h"
/**
 *puts_half - prints half of a string.
 *@str: pointer to string.
 *
 *Return: void.
 */
void puts_half(char *str)
{
	int n, length, mid;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		mid = length / 2;
		for (n = mid; n < length; n++)
		{
			putchar(str[n]);
		}
	}
	else
	{
		mid = (length - 1) / 2;
		for (n = mid + 1; n < length; n++)
		{
			putchar(str[n]);
		}
	}
	putchar('\n');
}
