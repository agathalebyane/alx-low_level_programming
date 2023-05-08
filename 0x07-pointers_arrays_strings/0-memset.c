#include "main.h"

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 *
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;
	const char *psrc = src;

	while (n--)
	{
		*pdest++ = *psrc++;
	}

	return (dest);
}
