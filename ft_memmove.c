/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:26:35 by taehkwon          #+#    #+#             */
/*   Updated: 2023/03/20 16:59:30 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;

	if (dst == src)
		return (dst);
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (src_p < dst_p)
	{
		while (len--)
			*(dst_p + len) = *(src_p + len);
	}
	else
	{
		while (len--)
		{
			*dst_p = *src_p;
			dst_p++;
			src_p++;
		}
	}
	return (dst);
}
