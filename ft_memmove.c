/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:11:35 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 14:11:42 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		buf[24000];
	size_t		i;

	i = -1;
	while (++i < n)
	{
		buf[i] = ((char *)src)[i];
	}
	i = -1;
	while (++i < n)
	{
		((char *)dest)[i] = buf[i];
	}
	return (dest);
}
