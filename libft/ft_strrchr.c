#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
    int i;
    int s_len;

    i = 0;
    s_len = strlen(s);

    if (c == '\0')
    {
        // printf("%d , ", s_len);
        return (char *)&s[s_len];
    }

    while (s_len > 0)
    {
        if (s[s_len - 1] == (char)c)
            return (char *)&s[s_len - 1];
        s_len--;
    }

    return NULL;
}

int main(void)
{
    printf("%s\n", ft_strrchr("banana", '\0'));

    printf("%s\n", ft_strrchr("banana", 'a'));

    printf("%s\n", ft_strrchr("banana", ' '));
    return 0;
}

