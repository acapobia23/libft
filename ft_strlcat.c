#include "libft.h"

char	*strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
	size_t	c;

	c = 0;
	i = -1;
	while (dst[i])
		i++;
	while (i < size)
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (dest);
}