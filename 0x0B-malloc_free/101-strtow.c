#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to coun
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
    int flag = 0;
    int w = 0;

    while (*s)
    {
        if (*s == ' ')
        {
            flag = 0;
        }
        else if (flag == 0)
        {
            flag = 1;
            w++;
        }
        s++;
    }

    return w;
}

/**
 * strtow - splits a stri
 * @str: string t
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
    char **matrix, *tmp;
    int i, k = 0, len = 0, words = 0, c = 0, start = 0, end = 0;
    int j;

    if (str == NULL || str[0] == '\0')
        return NULL;

    while (str[len])
        len++;

    words = count_word(str);

    if (words == 0)
        return NULL;

    matrix = (char **)malloc(sizeof(char *) * (words + 1));

    if (matrix == NULL)
        return NULL;

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (c)
            {
                end = i;
                tmp = (char *)malloc(sizeof(char) * (c + 1));

                if (tmp == NULL)
                    return NULL;

                for (j = start; j < end; j++)
                    tmp[j - start] = str[j];

                tmp[c] = '\0';
                matrix[k] = tmp;
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
        {
            start = i;
        }
    }

    matrix[k] = NULL;

    return matrix;
}
