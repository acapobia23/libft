#include "libft.h"

char *stpcpy(char *dst, const char *src)
{
    int	i;

	i = -1;
	if (!src)
		return (dst);
	while (src[++i])
		dest[i] = src[i];
	dest[i] = "\0";
	return (dst);	
}
