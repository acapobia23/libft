#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = -1;
    while (++i < n)
    {
        if ((s + i) == c)
            return (s + i);
    }
    return (NULL);
}