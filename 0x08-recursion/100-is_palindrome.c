#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: input
 * Return: always success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 +  _strlen_recursion(s + 1));

}

/**
 * compare_string - compare character
 * @s: input
 * @left: small
 * @rigth: large
 * Return: always success
 */
int compare_string(char *s, int left, int rigth)
{
	if (*(s + left) == *(s + rigth))
	{
		if (left == rigth || left == rigth  + 1)
			return (1);
		return (0 + compare_string(s, left + 1, rigth - 1));
	}
	return (0);
}

/**
 * is_palindrome - entry
 * @s: string
 * Return: always succes
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
