#include "libft.h"

static size_t   find_len(const char *s,int i, int c, int idx)
{
    if (idx == 0)
    {
        while (s[i] != c)
            i++;
    }
    else
    {
        while (s[i] != c)
            i++;
        while (s[i] == c)
            i++;        
    }
    return (i);
}

static char **mtx_init(char const *s, char c)
{
    char    **mtx;
    int     len;
    int     i;

    mtx = NULL;
    i = -1;
    len = 0;
    while (s[++i])
    {
        if (s[i] == c)
            len++;
    }
    if (s[i] == '\0' && len == 0 && i != 0)
        len++;
    else if (s[i] == '\0' && len == 0 && i != 0)
        return (NULL);
    mtx = malloc(sizeof(char *) * (len + 1));
    if (!mtx)
        return (NULL);
    mtx[len] = NULL;
    return (mtx);
}

char **ft_split(char const *s, char c)
{
    char    **mtx;
    int     x;
    int     i;

    if (!s)
        return (NULL);
    mtx = NULL;
    x = -1;
    i = 0;
    mtx = mtx_init(s, c);
    if (!mtx)
        return (NULL);
    while (s[i] == c)
        i++;
    while (mtx[++x])
    {
        mtx[x] = ft_substr(s, i, find_len(s, i, c, 0));//0 per mtx || 1 per new start str
        i = find_len(s, i, 1);
    }
    return (mtx);
}
