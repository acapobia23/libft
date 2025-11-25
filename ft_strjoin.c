/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcapobi <alcapobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:29:29 by alcapobi          #+#    #+#             */
/*   Updated: 2025/11/25 15:40:01 by alcapobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len1;
	size_t	len2;
	size_t	i;
	
	i = -1;	
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new = NULL;
	new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new)
		return (NULL);
	len1 = -1;
	while (s1[++len1])
		new[++i] = s1[len1];
	len1 = -1;
	while (s2[++len2])
		new[++i] = s2[len2];
	new[i] = '\0';
	return (new);
}