/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:32:46 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/03 11:38:27 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_z_init(void)
{
	char	*str;

	str = malloc(sizeof(char) * 1);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	beg;
	unsigned int	end;
	char			*str;
	unsigned int	i;

	beg = 0;
	while (s[beg] && beg < start)
		beg++;
	if (!s[beg])
		return (ft_z_init());
	end = beg;
	i = 0;
	while (s[end] && i++ < len)
		end++;
	str = malloc(sizeof(char) * ((end - beg) + 1));
	i = 0;
	while (beg < end)
	{
		str[i] = s[beg];
		i++;
		beg++;
	}
	str[i] = '\0';
	return (str);
}
