// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void    *ft_memset(void *block, int value, size_t len)
{
    unsigned char *temp;

    temp = (unsigned char *)block;

    size_t  i;

    i = 0;
    while (i < len)
    {
        temp[i] = (unsigned char)value;
        i++;
    }
    return block;
}

int main(void)
{
    char str[40] = "456";
    printf("Before: %s\n", str);

    ft_memset(str, '^',strlen(str));

    printf("After: %s\n", str);

    int buffer1[4] = {1, 2, 3, 4};

    ft_memset(buffer1, 5, sizeof(buffer1));

    printf("Buffer after: ");
    for (int i = 0; i < sizeof(buffer1) / sizeof(int); i++)
        printf("%d ", buffer1[i]);
}
