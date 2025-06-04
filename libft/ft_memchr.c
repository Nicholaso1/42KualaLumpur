#include <stdlib.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *tmp_s;

    tmp_s = (unsigned char *)s;

    size_t i;

    i = 0;
    while (i < n)
    {
        if (tmp_s[i] == (unsigned char)c)
            return (void *)&tmp_s[i];
        i++;
    }
    return NULL;
}

#include <stdio.h>

int main(void)
{
    char s[] = "Hello World";
    char *result = ft_memchr(s, 'o', 20);
    printf("%c\n", *result);

    int buffer[5] = {1, 2, 3, 4, 5};
    int *int_result = ft_memchr(buffer, 3, sizeof(buffer));
    printf("%d\n", *int_result);

    return 0;
}


