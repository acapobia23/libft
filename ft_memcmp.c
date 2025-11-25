#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    (const  char*)s1;
    (const  char*)s2;
    i = 0;
    if (n == 0)
        return (0);
    while (i < n && (s1 + i) == (s2 + i))
        i++;
    return ((s1 + i) - (s2 + i));
}