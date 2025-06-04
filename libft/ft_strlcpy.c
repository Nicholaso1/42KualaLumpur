#include <string.h>
#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t len_src;
    size_t i;

    i = 0;

    len_src = strlen(src);

    if (dstsize > 0)
    {
        while (src[i] && (i < dstsize - 1))
        {
            dst[i] = src[i];
            i++;
        }
    }
    dst[i] = '\0';

    return len_src;
}

#include <stdio.h>

int main(void)
{
    char src[] = "Hello, World!";
    char dst[20];
    char small_dst[5];

    size_t copied;

    copied = ft_strlcpy(dst, src, sizeof(dst));

    printf("Source: '%s'\n", src);
    printf("Destination (large buffer): '%s'\n", dst);
    printf("Copied length: %zu\n\n", copied);

    copied = ft_strlcpy(small_dst, src, sizeof(small_dst));
    printf("Source: '%s'\n", src);
    printf("Destination (small buffer): '%s'\n", small_dst);
    printf("Copied length: %zu\n", copied);

    return 0;
}
