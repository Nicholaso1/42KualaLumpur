#include <string.h>


size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  src;
    size_t dst;
    size_t i;
    size_t j;

    src_len = strlen(src);
    dst_len = strlen(dst);

    if (dst_len == dstsize)
        return dst_len + src_len;

    if (dstsize > src_len + dst_len)
    {
        while (dest[i])
            i++;
        while (src[j])
        {
            dest[i] = src[j];
            j++;
            i++;
        }
        else
        {
            
        }
    }
    return src_len + dst_len;
}
