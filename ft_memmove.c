#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;

    i = -1;
    if (!dest && !src)
        return (NULL);
    if (dest > src && dest < (src + n))
    {
        while (n--)
            dest[i] = src[i];        
    }
    else
    {
        while (++i < n)
            dest[i] = src[i];
    }
    return (dest);
}
