/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:28:53 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 14:29:24 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_o(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	e;

	i = 0;
	e = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (little[e])
		e++;
	if (e > len)
		return (NULL);
	while (big[i] && i <= len - e)
	{
		if (ft_o(&big[i], little))
			return ((char *) &big[i]);
		i++;
	}
	return (NULL);
}
