#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t	i;

	i = -1;
	while (s[++i])
		s[i] = (*f)(i, s[i]);
	return (s);
}