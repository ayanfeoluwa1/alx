#include <stdio.h>

/**
 * main - Entry point
 *
 * The fuction should print alphabets in lower case
 * Return: 0;
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
		return (0);
	}

}

