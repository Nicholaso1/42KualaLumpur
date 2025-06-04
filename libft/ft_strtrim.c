#include <string.h>
#include <stdlib.h>

int ft_check(char c);

char *ft_strtrim(const char *s1, const char *set)
{
    int start;
    int end;

    start = 0;
    end = strlen(s1) - 1;

    while (start <= end && ft_check(s1[start] == 0))
        start = start + 1;
    while (end >= start && ft_check(s1[end] == 0))
        end = end - 1;

    char *new_string = (char *)malloc(sizeof(char) * (end - start + 1));

    if (new_string == NULL)
        return NULL;

    while (new_string[i])

    // ababaaaMy name is Simonbbaaabbad -----> My name is Simon
}

int ft_check(char c)
{
    int i;

    i = 0;
    while (i < strlen(set))
    {
        if (s1[i] == c)
            return 0;
        i++;
    }
}

int main(void)
{
    char *buffer[] = "ababaaaMy name is Simonbbaaabbad";
    printf("%s\n", ft_strtrim(buffer));

    return 0;
}
