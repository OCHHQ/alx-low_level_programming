#include "main.h"

/**
 * leet - function to encode the string
 * @str: string that will be encoded
 * Return: return the encoded string
 */
char *leet(char *str)
{
    int index1 = 0, index2;
    char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

    while (str[index1])
    {
        for (index2 = 0; index2 <= 7; index2++)
        {
            if (str[index1] == leet[index2] ||
                str[index1] - 32 == leet[index2])
                str[index1] = '0' + index2;
        }
        index1++;
    }
    return (str);
}

