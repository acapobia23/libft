#include "libft.h"

char	*strnstr (const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	i = 0;
	c = 0;

	if (!little)
		return (NULL);
	while (big[i] && i < len && little[c])
	{
		if (little[c] == big[i])
		{
			while (little[i] == big[i] && big[i] && i < len)
			{
				c++;
				i++;
			}
			
		}
		i++;
	}
	if (little[c] == '\0')
		return (big + (i - c));
	return (NULL);
}
