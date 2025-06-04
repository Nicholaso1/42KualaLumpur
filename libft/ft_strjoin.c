#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(const char *s1, const char *s2)
{
    if (!s1 && !s2)
        return NULL;
    if (!s1)
        return strdup(s2);
    if (!s2)
        return strdup(s1);

    size_t len_s1;
    size_t len_s2;

    len_s1 = strlen(s1);
    len_s2 = strlen(s2);

    char *buffer = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));

    if (buffer == NULL)
        return NULL;

    size_t i;
    size_t j;

    i = 0;
    j = 0;

    while (i < len_s1)
    {
        buffer[i] = s1[i];
        i++;
    }
    while (j < len_s2)
    {
        buffer[i] = s2[j];
        j++;
        i++;
    }
    buffer[i] = '\0';

    return buffer;
}

int main(void)
{
    printf("%s\n", ft_strjoin("Hello", "World"));

    return 0;
}
