/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:23:46 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 14:25:26 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = -1;
	while (dst[++l] && l < size)
		;
	while (i < (size - l - 1) && src[i] && size > l)
	{
		dst[l + i] = src[i];
		i++;
	}
	if (l < size)
		dst[l + i] = '\0';
	while (src[i])
		i++;
	return (i + l);
}
