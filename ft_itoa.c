/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 00:45:01 by acapobia          #+#    #+#             */
/*   Updated: 2025/11/26 16:24:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	swap_string(char *s, int i)
{
	int		j;
	char	temp;

	j = 0;
	if (s[j] == '-')
		j++;
	while (j < i)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i--;
		j++;
	}
}

static int	malloc_str_from_int(long n)
{
	int		cont;

	cont = 0;
	if (n < 0)
	{
		n *= -1;
		cont++;
	}
	if (n == 0)
		return (1);
	while (n != 0)
	{
		cont++;
		n /= 10;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*digit;
	int		i;
	long	n_long;

	n_long = (long)n;
	i = 0;
	digit = (char *)malloc(malloc_str_from_int(n_long) + 1);
	if (!digit)
		return (NULL);
	if (n_long < 0)
	{
		digit[i++] = '-';
		n_long *= -1;
	}
	if (n_long == 0)
		digit[i++] = '0';
	while (n_long != 0)
	{
		digit[i++] = (n_long % 10) + 48;
		n_long /= 10;
	}
	digit[i] = '\0';
	swap_string(digit, --i);
	return (digit);
}