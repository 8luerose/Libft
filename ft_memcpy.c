/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 22:46:30 by taehkwon          #+#    #+#             */
/*   Updated: 2023/03/26 20:14:22 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;

	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	while (n--)
	{
		*dst_p = *src_p;
		dst_p++;
		src_p++;
	}
	return (dst);
}

/* if (!dst || !src)
		return (NULL);*/