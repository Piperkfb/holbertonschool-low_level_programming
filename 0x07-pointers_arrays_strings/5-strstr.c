#include "main.h"

/**
 * _strstr - Finds full substring in string
 * @haystack: String
 * @needle: Substring
 *
 * Return: Pointer to Haystack first instance
 */

char *_strstr(char *haystack, char *needle)
{
	int sc = 0;
	int nc = 0;
	int cnt = 0;
	char *p;

	while (needle[nc] != '\0')
	{
		nc++;
		cnt++;
	}
	while (haystack[sc] != '\0')
	{
		for (nc = 0; nc <= cnt; nc++)
		{
			if (haystack[sc] != needle[nc])
			{
				sc++;
				break;
			}
			else
			{
				sc++;
			}
		}
		if (needle[nc] == '\0')
		{
			p = &haystack[sc - cnt];
			return (p);
		}
	}
	return ('\0');
}
