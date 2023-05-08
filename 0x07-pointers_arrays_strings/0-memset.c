#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char *buffer = malloc(sizeof(char) * 10); /* allocate memory for buffer */
    if (buffer == NULL) /* check if allocation was successful */
    {
        printf("Error: Unable to allocate memory\n");
        return 1;
    }

    _memset(buffer, 'A', 10); /* fill buffer with 'A' */
    for (unsigned int i = 0; i < 10; i++)
    {
        printf("%c ", buffer[i]); /* print each character in buffer */
    }
    printf("\n");

    free(buffer); /* free memory allocated for buffer */

    return 0;
}
