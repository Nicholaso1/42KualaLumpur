#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t s_len;

    s_len = strlen(s);

    if (s_len == 0)
        return NULL;
    if (start >= s_len)
        return NULL;
    if (start + len > s_len)
        len = s_len - start;

    char *substring;
    substring = (char *)malloc(sizeof(char) * (len + 1));

    if (substring == NULL)
        return NULL;

    size_t i;

    i = 0;
    while (s[start] && i < len)
    {
        substring[i] = s[start];
        i++;
        start++;
    }
    substring[i] = '\0';
    return substring;
}

int main(void)
{
    char *sub = ft_substr("HelloWorld", 5, 15);
    printf("%s\n", sub);
    free(sub);
    
    return 0;
}
