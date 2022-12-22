#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string.
 * @src: src string.
 * @n: number of bytes to be used at most.
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
0-strcat.c int i, k, len;

0-strcat.c len = 0;

0-strcat.c for (i = 0; dest[i] != '\0'; i++)
0-strcat.c {
0-strcat.c 0-strcat.c len++;
0-strcat.c }

0-strcat.c for (k = 0; src[k] != '\0' && k < n; k++)
0-strcat.c {
0-strcat.c 0-strcat.c dest[len] = src[k];
0-strcat.c 0-strcat.c len++;
0-strcat.c }

0-strcat.c dest[len] = '\0';

0-strcat.c return (dest);
}
