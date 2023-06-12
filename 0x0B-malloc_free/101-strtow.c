#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: The string to be split
 *
 * Return: A pointer to an array of strings (words),
 *         or NULL if str == NULL or str == "" or if it fails
 */
char **strtow(char *str)
{
int i, j, k, word_count, word_length;
char **words;

if (str == NULL || *str == '\0')
{
return (NULL);
}
word_count = count_words(str);
if (word_count == 0)
{
return (NULL);
}
words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
{
return (NULL);
}
for (i = 0, j = 0; i < word_count; i++)
{
while (str[j] == ' ')
{
j++;
}

word_length = get_word_length(str + j);
words[i] = copy_word(str + j, word_length);
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
{
free(words[k]);
}
free(words);
return (NULL);
}
j += word_length;
}
words[i] = NULL;

return (words);
}

/**
 * count_words - Counts the number of words in a string
 * @str: The string to be counted
 *
 * Return: The number of words in str
 */
int count_words(char *str)
{
int count = 0, i = 0;

while (str[i] != '\0')
{
if (str[i] != ' ')
{
count++;
while (str[i] != ' ' && str[i] != '\0')
{
i++;
}
}
else
{
i++;
}
}

return (count);
}

/**
 * get_word_length - Calculates the length of a word in a string
 * @str: The string containing the word
 *
 * Return: The length of the word
 */
int get_word_length(char *str)
{
int length = 0;

while (str[length] != ' ' && str[length] != '\0')
{
length++;
}

return (length);
}

/**
 * copy_word - Copies a word from a string
 * @str: The string containing the word
 * @length: The length of the word
 *
 * Return: A pointer to the copied word
 */
char *copy_word(char *str, int length)
{
int i;
char *word;

word = malloc(sizeof(char) * (length + 1));

if (word == NULL)
{
return (NULL);
}

for (i = 0; i < length; i++)
{
word[i] = str[i];
}

word[i] = '\0';

return (word);
}
