void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    /* declare a temporary pointer for dst */
    unsigned char *tmp_dst;
    /* declare a temporary pointer for stc */
    const unsigned char *tmp_src;

    /* if src and dst are NULL, return dst */
    if (dst == NULL && src == NULL)
        return dst;

    // tmp_dst points to the same memory address as dst
    tmp_dst = (unsigned char *)dst;
    // tmp_src points to the same memory address as src
    tmp_src = (const unsigned char *)src;

    int i = 0;
    while (i < n)
    {
        tmp_dst[i] = tmp_src[i];
        i++;
    }
    return dst;
}

int main(void)
{
    char src[] = "Hello, World!";
    char dst[30];

    ft_memcpy(dst, src, strlen(src) + 1);
    printf("Result: %s\n", dst);

    // Example: Copying zero bytes (edge case)
    char src3[] = "Skibidi";
    char dst3[20];
    ft_memcpy(dst3, src3, 0);  // Copy 0 bytes
    printf("Example 3: %s\n", dst3);  // Should be empty

    // Example: Null pointer test
    char dst4[20];
    ft_memcpy(dst4, NULL, 5);  // src is NULL, should handle this case
    printf("Example 4: %s\n", dst4);  // Should be unchanged


}
