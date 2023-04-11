#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * word_len - Locates the index marking the end of the
 *            first word contained within the string.
 * @str: The string to be searched.
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int len = 0;

	while (*str && *str != ' ')
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int words = 0;

	while (*str)
	{
		while (*str && *str == ' ')
			str++;
		if (*str)
		{
			words++;
			str += word_len(str);
		}
	}
	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int words = count_words(str);

	if (words == 0)
		return (NULL);

	char **strings = malloc(sizeof(char *) * (words + 1));

	if (strings == NULL)
		return (NULL);

	for (int i = 0; i < words; i++)
	{
		while (*str && *str == ' ')
			str++;

	int len = word_len(str);

	strings[i] = malloc(sizeof(char) * (len + 1));

	if (strings[i] == NULL)
	{
		for (int j = 0; j < i; j++)
			free(strings[j]);
		free(strings);
		return (NULL);
	}

	strncpy(strings[i], str, len);
	strings[i][len] = '\0';
	str += len;
	}
	strings[words] = NULL;
	return (strings);
}
