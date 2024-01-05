#include "main.h"

/**
 * cap_string - capitalizes the first letter of each word in a string
 * @str: string to capitalize
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
    int index = 0;

    while (str[index])
    {
        if (str[index] >= 'a' && str[index] <= 'z')
        {
            if (index == 0 ||
                str[index - 1] == ' ' ||
                str[index - 1] == '\t' ||
                str[index - 1] == '\n' ||
                str[index - 1] == ',' ||
                str[index - 1] == ';' ||
                str[index - 1] == '.' ||
                str[index - 1] == '!' ||
                str[index - 1] == '?' ||
                str[index - 1] == '"' ||
                str[index - 1] == '(' ||
                str[index - 1] == ')' ||
                str[index - 1] == '{' ||
                str[index - 1] == '}')
            {
                str[index] -= 32;  /* Convert to uppercase */
            }
        }
        index++;
    }

    return (str);
}

