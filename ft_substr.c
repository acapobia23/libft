/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcapobi <alcapobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:19:20 by alcapobi          #+#    #+#             */
/*   Updated: 2025/11/25 15:28:27 by alcapobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	int		len_sub;

	i = start -1;
	len_sub = 0;
	while (++i < len)
		len_sub++;	
	sub = NULL;
	sub = malloc(sizeof(char) * (len_sub + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (start < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}