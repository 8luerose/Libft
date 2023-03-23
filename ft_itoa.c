/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 19:02:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/03/23 22:49:21 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_len(long long n)
{
	int			len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = (-1) * n;
	}
	while (n > 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	int			len;
	int			sign;

	sign = 1;
	if (n < 0)
		sign = sign * -1;
	len = ft_int_len((long long)n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (0);
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		len = len - 1;
		result[len] = (n % 10) * sign + '0';
		n /= 10;
	}
	if (sign == -1)
		result[0] = '-';
	return (result);
}
