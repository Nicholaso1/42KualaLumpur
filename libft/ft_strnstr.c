#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    size_t len_needle;

    i = 0;
    j = 0;

    len_needle = strlen(needle);

    if (len_needle == 0)
        return (char *)haystack;

    while (haystack[i] && i < len - len_needle)
    {
        while (needle[j] && (haystack[i+j] == needle[j]) && (i+j < len))
        {
            j++;

            if (j == len_needle)
            {
                printf("%zu, %zu",i, j);
                return (char *)&haystack[i];
            }
        }
        j = 0;
        i++;
    }
    return NULL;
}

int main(void)
{
    printf("%s\n", ft_strnstr("HelloWorld", "Wo", 7));
    return 0;
}
