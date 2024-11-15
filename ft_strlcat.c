#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t dst_len = 0;
    size_t src_len = 0;
    size_t i = 0;
    size_t k;

    while (dst[dst_len] != '\0' && dst_len < dstsize)
    {
        dst_len++;
    }

    k = dst_len;

    while (src[src_len] != '\0')
    {
        src_len++;
    }

    if (dst_len >= dstsize)
    {
        return (dstsize + src_len);
    }

    while (k < dstsize - 1 && src[i] != '\0')
    {
        dst[k] = src[i];
        printf("%c", dst[k]);
        k++;
        i++;
    }

    dst[k] = '\0';

    return (dst_len + src_len);
}
