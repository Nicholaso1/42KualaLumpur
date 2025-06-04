#include <stdlib.h>
#include <stdio.h>

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *tmp;
    size_t total_size;
    size_t i;

    total_size = count * size;
    i = 0;
    tmp = malloc(total_size);

    if (tmp == NULL)
        return NULL;

    while (i < total_size)
    {
        tmp[i] = 0;
        i++;
    }
    return tmp;
}

int main(void)
{
    int count = 5;
    size_t size = sizeof(int);

    int *array = (int *)calloc(count, size);

    if (array == NULL)
        return 1;

    for (int i = 0; i < count; i++)
        printf("%d ", array[i]);

    free(array);

    return 0;
}
