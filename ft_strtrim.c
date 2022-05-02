/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:31:05 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 14:32:30 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_occurence(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static char	ft_left_trim(char const *s1, char const *set)
{
	while (ft_occurence(set, *s1))
		s1++;
	return ((char *)s1);
}

static char	*ft_right_trim(char const *s1, char const *set)
{
	s1 += (ft_strlen(s1) - 1);
	while (ft_occurence(set, *s1))
		s1--;
	return ((char *)s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p1;
	char	*p2;
	char	*str;
	int		i;

	if (!s1 || !set)
		return (NULL);
	p1 = ft_left_trim(s1, set);
	p2 = ft_right_trim(s1, set);
	str = malloc(sizeof(char) * (p2 - p1) + 2);
	if (!str)
		return (NULL);
	i = -1;
	while (p1 != p2)
		str[++i] = *(p1++);
	str[++i] = *p1;
	str[++i] = '\0';
	return (str);
}
