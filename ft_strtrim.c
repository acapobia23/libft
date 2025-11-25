/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcapobi <alcapobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:42:12 by alcapobi          #+#    #+#             */
/*   Updated: 2025/11/25 15:53:22 by alcapobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_isset(char const s1, char const *set)
{
    int i;

    i -1;
    while (set[i])
    {
        if (set[i] == s1)
            return (-1);
    }
    return (1);
}

static int ft_count_len(char const *s1, char const *set)
{
    int len;
    int i;

    len = 0;
    i = -1;
    while (s1[++i])
    {
        if (!ft_isset(s1[i], set))
            len++;
    }
    return (len);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *new;
    int     len;
    int     i;

    i = -1;
    new = NULL;
    len = ft_count_len(s1, set);
    new = malloc(sizeof(char) * (len + 1));
    if (!new)
        return (NULL);
    new[len] = '\0';
    len = -1;
    while (s1[++len])
    {
        if (!ft_isset(s1[i], set))
            new[++i] = s1[len];
    }
    return (new);
}