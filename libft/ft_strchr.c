#include <stdlib.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;

    while (s[i])
    {
        if (s[i] == (char)c)
            return (char *)&s[i]; // Match return type
        i++;
    }
    if (c == '\0')
        return (char *)&s[i];

    return NULL;
}

int main(void)
{
    char str[] = "Hello, World!";
    char *result = ft_strchr(str, 'W');

    printf("Result: %s\n", result);

    char str2[] = "Hello, World!";
    char *result2 = ft_strchr(str2, 'x');

    printf("Result2: %s\n", result2);

    char str3[] = "Hello, World!";
    char *result3 = ft_strchr(str3, '\0');
    printf("Result3: %s\n", result3);

    char str4[] = "Hello, World!";
    char *result4 = ft_strchr(str4, 'H');

    char str5[] = "Hello, World!";
    char *result5 = ft_strchr(str5, '!');

    char str6[] = "";
    char *result6 = ft_strchr(str6, 'H');

    printf("Result6: %s\n", result6);

    char str7[] = "banana";
    char *result7 = ft_strchr(str7, 'a');

    char str8[] = "abracadabra";
    char *result8 = ft_strchr(str8, 'c');

    return 0;
}
