/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:05:24 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 14:06:50 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*data;
	size_t	i;

	data = malloc(sizeof(char) * (size * nmemb));
	if (!data)
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		data[i] = 0;
		i++;
	}
	return ((void *)data);
}
