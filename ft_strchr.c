/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:18:09 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 14:19:08 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	cdup;

	cdup = c;
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == cdup)
			return ((char *)s);
		s++;
	}
	if (*s == cdup)
		return ((char *)s);
	return (NULL);
}
