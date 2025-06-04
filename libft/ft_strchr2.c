#include <stdlib.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;

    while (s[i])
    {
        if (s[i] == (char)c)
            return s[i]; // Match return type
        i++;
    }

    if (c == '\0')
        return (char *)&s[i];

    return NULL;
}

int main(void)
{
    char str[] = "Hello, World!";
    char *result;

    result = ft_strchr(str, 'W');

    printf("Result: %s\n", result);
    return 0;
}
