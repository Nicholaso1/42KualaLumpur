#include <stdlib.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *tmp_s1;
    const unsigned char *tmp_s2;

    tmp_s1 = (const unsigned char *)s1;
    tmp_s2 = (const unsigned char *)s2;

    size_t i;

    i = 0;
    while (i < n)
    {
        if (tmp_s1[i] != tmp_s2[i])
            return tmp_s1[i] - tmp_s2[i];
        i++;
    }
    return 0;
}

int main(void)
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 6};

    int result = ft_memcmp(arr1, arr2, 5 * sizeof(int));

    printf("Result: %d\n", result);

    char s1[] = "Hello World";
    char s2[] = "Hello Earth";

    int result1 = ft_memcmp(s1, s2, 5);
    printf("Result1: %d\n", result1);

    return 0;
}
