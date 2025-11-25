#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t  i;

    i = -1;
    while (s[++i])
        ft_putchar_fd(s[i], fd);    
}