/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:16:14 by taehkwon          #+#    #+#             */
/*   Updated: 2023/03/23 01:55:49 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_in_set(char c, const char *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static size_t	find_start(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_check_in_set(s1[i], set))
		i++;
	return (i);
}

static size_t	find_end(const char *s1, const char *set)
{
	size_t	j;

	j = ft_strlen(s1);
	while (j > 0 && ft_check_in_set(s1[j - 1], set))
		j--;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1 || !set)
		return (0);
	start = find_start(s1, set);
	end = find_end(s1, set);
	if (end <= start)
		return (ft_strdup(""));
	result = (char *)malloc(end - start + 1);
	if (!result)
		return (0);
	ft_strlcpy(result, s1 + start, end - start + 1);
	return (result);
}
