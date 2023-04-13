#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: string to conatenates
 * @s2: other string to conatenates
 * Return: Always 0 (success)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int v = 0, g = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if
		(s3 = NULL)
		return (NULL);

	v = 0;
	g = 0;

	if (s1)
	{
		while (v < len1)
		{
			s3[v] = s1[v];
			v++;
		}
	}
	if (s2)
	{
		while (v < (len1 + len2))
		{
			s3[v] = s2[g];
			v++;
			g++;
		}
	}
	s3[v] = '\0';

	return (s3);
}
