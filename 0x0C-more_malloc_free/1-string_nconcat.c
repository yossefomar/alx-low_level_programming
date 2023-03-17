#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate (up to n bytes)
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_len, s2_len, i;

	/* Handle NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Get lengths of input strings */
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	/* Limit n to the length of s2 */
	if (n > s2_len)
		n = s2_len;

	/* Allocate memory for concatenated string */
	concat_str = malloc(s1_len + n + 1);
	if (concat_str == NULL)
		return (NULL);

	/* Copy s1 and first n bytes of s2 into concatenated string */
	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];
	for (i = 0; i < n; i++)
		concat_str[s1_len + i] = s2[i];

	/* Add null terminator to concatenated string */
	concat_str[s1_len + n] = '\0';

	return (concat_str);
}
