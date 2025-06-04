#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *strdup(const char *s1)
{
    char *buffer = (char *)malloc(sizeof(char) * (strlen(s1) + 1));

    if (buffer == NULL)
        return NULL;

    int i;

    i = 0;
    while (s1[i])
    {
        buffer[i] = s1[i];
        i++;
    }
    buffer[i] = '\0';
    return buffer;
}

int main(void)
{
    char *dup = strdup("Hello, World!");
    printf("%s\n", dup);
    return 0;
}
