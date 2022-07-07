#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string.
 *
 * Return: the length.
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * isPal - helper function
 * @str: the input string
 * @a: starting
 * @z: ending
 *
 * Return: 1 if yes, 0 if not.
 */

int isPal(char *str, int a, int z)
{
	if (a >= z)
		return (1);

	if (*(str + a) != (*(str + z)))
		return (0);

	return (isPal(str, a + 1, z - 1));
}

/**
 * is_palindrome - checks if the input string is a palindrome.
 * @s: the pointer to the string
 *
 * Return: 1 if yes, 0 if not.
 */

int is_palindrome(char *s)
{
	int sl = _strlen_recursion(s) - 1;

	return (isPal(s, 0, sl));
}

/**
 * reverse:  reverse string s in place
 */
void reverse(char s[])
{
	int i, j;
	char c;

	for (i = 0, j = strlen(s)-1; i<j; i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

/**
 * itoa:  convert n to characters in s
 */
void itoa(int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)  /* record sign */
		n = -n;          /* make n positive */
	i = 0;
	do {       /* generate digits in reverse order */
		s[i++] = n % 10 + '0';   /* get next digit */
	} while ((n /= 10) > 0);     /* delete it */
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
}

/**
 * main - multiplies two numbers.
 * @argc: the number of arguments
 * @argv: the arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	char str[100];
	unsigned int i, j, input;
	unsigned int found, temp;

	if (argc != 2)
		return (printf("Error\n"), 1);

	input = atoi(*(argv + 1));
	i = input;
	found = 0;

	while(!found)
	{
		j = i;
		while(!found)
		{
			temp = i * j;
			itoa(temp, str);
			if(is_palindrome(str))
			{
				printf("Found i: %d, j: %d = %d\n", i, j, temp);
				found = 1;
			}
			j--;
		}
		i--;
	}

	return (0);
}
