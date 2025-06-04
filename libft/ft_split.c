#include <stdio.h>
#include <stdlib.h>

// Count Substrings
int count_substrings(const char *str, char sep)
{
    int i;
    int counter;

    i = 0;
    counter = 0;

    while (str[i])
    {
        if (str[i] == sep)
            counter++;
        i++;
    }
    return counter + 1;
}

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;
    while (src[i] && i < n)
    {
        dest[i] = src[i];
        i++:
    }
    while (dest[i])
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

char **allocate_memory(int num_segments)   
{
    char **array = (char **)malloc(sizeof(char *) * num_segments);

    if (array == NULL)
        return NULL;

    return array;
}

char **ft_split(const char *s, char c)
{
    char **substrings;
    char *current_substring;
    int num_segments;

    num_segments = count_substrings(s,c);
    substrings = allocate_memory(num_segments);

    int substring_index;
    int i;
    int length_substring;

    substring_index = 0;
    char_index = 0;
    i = 0;
    length_substring = 0;

    while (s[i]) 
    {
        if (s[i] == c)
        {
            current_substring = malloc(sizeof(char) * (length_substring + 1));
    
        }
        i++;
    }

    while (s[i])
    {
        if (s[i] == c)
        {
            current_substring = malloc(sizeof(char) * (index_memory + 1));
            current_substring[char_index] = '\0';
            substrings[substring_index] = current_substring;
            substring_index++;
            index_memory = 0;
            char_index = 0;
        }
        else
        {
            current_substring[char_index] = s[i];
            char_index++;
        }
        i++;
    }
    return substrings;
}

int main(void)
{
    char str[] = "Asahi Asahi Drink Asahi Asahi";
    // printf("%d\n", count_substrings(str, ' '));
    printf("%s\n", ft_split(str, ' '));
    return 0;
}
