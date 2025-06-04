#include <stdio.h>
#include <stdlib.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *tmp_dst;
    const unsigned char *tmp_src;

    if (src == NULL || dst == NULL)
        return dst;

    tmp_dst = (unsigned char *)dst;
    tmp_src = (const unsigned char *)src;

    size_t  i;

    i = 0;
    while (i < n)
    {
        tmp_dst[i] = tmp_src[i];
        i++;
    }
    return dst;
}


int main(void)
{
    char src[30] = "Skibidiiiiiiiiiiii";
    char dst[20];

    ft_memcpy(dst, src, 15);
    dst[15] = '\0';

    printf("After: %s\n", dst);

    return 0;
}
