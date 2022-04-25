#include <stdlib.h>

/**
 * *_strstr - searches string for any set of bytes
 * @haystack: pointer to a string
 * @needle: pointer to a string
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
		if (needle == '\0')
			return (haystack);

		while (*haystack != '\0')
		{
			if (*haystack == *needle)
				return (haystack);
			haystack++;
		}

		if (*haystack != *needle)
			return (NULL);
		return (0);
}
