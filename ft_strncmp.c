#include "libft.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[1] && s2[i] && i < n && s1[i] == s2[i])
		i++;
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] - s2[i] > 0)
		return (1);
	return (-1);
}