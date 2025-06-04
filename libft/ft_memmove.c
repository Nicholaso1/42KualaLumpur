#include <stdlib.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *tmp_dst;
    const unsigned char *tmp_src;

    size_t counter;

    counter = 0;

    if (src == NULL || dst == NULL)
        return NULL;

    tmp_dst = (unsigned char *)dst;
    tmp_src = (const unsigned char *)src;

    if (tmp_src < tmp_dst && tmp_src + len > tmp_dst)
    { 
        while (len > 0)
        // Overlapping region
        tmp_dst[len] = tmp_src[len];
        len--;
    }
    else
    {
        while (counter < len)
        {
            tmp_dst[counter] = tmp_src[counter];
            counter++;
        }
    }
    return dst;
}

#include <stdio.h>

int main(void)
{
    char src1[] = "Hello, World!";
    char dst1[20];
    char src2[] = "Overlap Example";
    char dst2[20];

    ft_memmove(dst1, src1, 13);
    printf("After memmove:  src1 = \"%s\", dst1 = \"%s\"\n\n", src1, dst1);

    ft_memmove(src2 + 8, src2, 8); // Overlap within src2 itself
    printf("After memmove:  src2 = \"%s\", dst2 = \"%s\"\n\n", src2, dst2);

    ft_memmove(src2, src2, 15); // Copying entire string to itself
    printf("After memmove:  src2 = \"%s\"\n", src2);
}
