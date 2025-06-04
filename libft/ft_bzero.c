// include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void    ft_bzero(void *block, size_t n)
{
    unsigned char *temp;

    temp = (unsigned char *)block;

    size_t  i;

    i = 0;
    while (i < n)
    {
        temp[i] = 0;
        i++;
    }
}

int main(void)
{
    char buffer[5] = {'A', 'B', 'C', 'D', 'E'};

    printf("Buffer before: ");
    for (int i = 0; i < sizeof(buffer); i++)
        printf("%c ", buffer[i]);

    ft_bzero(buffer, sizeof(buffer));

    printf("Buffer after: ");
    for (int i = 0; i < sizeof(buffer); i++)
        printf("%d ", buffer[i]);

    int buffer1[4] = {1, 2, 3, 4};

    ft_bzero(buffer1, sizeof(buffer1));

    printf("Buffer after: ");
    for (int i = 0; i < sizeof(buffer1) / sizeof(int); i++)
        printf("%d ", buffer1[i]);

}
