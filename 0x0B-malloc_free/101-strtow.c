#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _isspace - checks if a character is a whitespace character
 * @c: the character to check
 *
 * Return: 1 if c is a whitespace character, otherwise 0
 */
int _isspace(int c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r')
        return (1);
    return (0);
}

/**
 * count_words - counts the number of words in a string
 * @str: the string to evaluate
 *
 * Return: number of words
 */
int count_words(char *str)
{
    int count = 0, in_word = 0;

    while (*str)
    {
        if (_isspace(*str))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }
    return (count);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), or NULL if failure
 */
char **strtow(char *str)
{
    char **words, *word_start, *word;
    int word_count, word_len, i = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    word_count = count_words(str);
    if (word_count == 0)
        return (NULL);

    words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    while (*str)
    {
        if (_isspace(*str))
        {
            str++;
            continue;
        }
        word_start = str;
        while (*str && !_isspace(*str))
            str++;
        word_len = str - word_start;
        word = malloc((word_len + 1) * sizeof(char));
        if (word == NULL)
        {
            for (i = i - 1; i >= 0; i--)
                free(words[i]);
            free(words);
            return (NULL);
        }
        for (i = 0; i < word_len; i++)
            word[i] = word_start[i];
        word[word_len] = '\0';
        words[i++] = word;
    }
    words[i] = NULL;
    return (words);
}
