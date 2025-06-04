#include <stdio.h>
#include <string.h>

void*   ft_memset(void *array, int c, size_t size)
{
    int i = 0;
    while (i < size)
    {
        (char *) array[i] = c;
        i++;
    }
    return array[0];
}
