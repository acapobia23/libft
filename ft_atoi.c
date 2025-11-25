/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcapobi <alcapobi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 14:03:15 by alcapobi          #+#    #+#             */
/*   Updated: 2025/11/25 14:59:33 by alcapobi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_n_len(const char *nptr)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	if (!nptr)
		return (-1);
	while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\t'))
		i++;
	if (nptr[i] && (nptr[i] == '+' || nptr[i] == '-'))
		i++;
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		i++;
		len++;
	}
	if (len == 0)
		return (-1);
	return (1);
}

int	atoi(const char *nptr)
{
	int	n;
	int	sign;
	int	c;
	int	i;

	i = 0;
	sign = 1;
	n = 0;
	if (!check_n_len(nptr))
		return (0);
	while (nptr[i] && (nptr[i] == ' ' || nptr[i] == '\t'))
		i++;
	if (nptr[i++] == '-')
		sign = -1;
	while (nptr[i] && (nptr[i] >= '0' && nptr[i] <= '9'))
		i++;
	while (nptr[--i] && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		n *= 10;
		n += nptr[i] - 48;
	}
	return (n * sign);
}