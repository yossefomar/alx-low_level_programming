#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: On success, a pointer to the duplicated string. It returns
 *         NULL if insufficient memory was available or if str is NULL.
 */
char *_strdup(char *str)
{
    char *dup;
    unsigned int len = 0;

    if (str == NULL)
        return (NULL);

    while (str[len] != '\0')
        len++;

    dup = malloc((len + 1) * sizeof(char));
    if (dup == NULL)
        return (NULL);

    for (unsigned int i = 0; i <= len; i++)
        dup[i] = str[i];

    return (dup);
}

