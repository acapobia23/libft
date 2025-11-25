/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcapobi <alcapobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:06:09 by alcapobi          #+#    #+#             */
/*   Updated: 2025/11/25 15:16:03 by alcapobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;
	size_t	len;

	i = -1;
	len = ft_strlen(s);
	dup = NULL;
	if (!s)
		return (dup);
	dup = malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (NULL);
	while (s[++i])
		dup[i] = s[i];
	dup[i] = '\0';
	return (dup);
}