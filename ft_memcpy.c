/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:11:13 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 14:11:16 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destchar;
	char	*srcchar;

	destchar = (char *)dest;
	srcchar = (char *)src;
	i = -1;
	while (++i < n)
	{
		destchar[i] = srcchar[i];
	}
	return (destchar);
}
