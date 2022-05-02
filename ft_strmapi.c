/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:26:39 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 14:27:40 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int		i;
	char	*str;

	i = -1;
	while (s && s[++i])
		;
	str = malloc(sizeof(char) * (i + 1));
	if (!str || !s || !f)
		return (NULL);
	str[i] = '\0';
	while (--i >= 0)
		str[i] = (*f)(i, s[i]);
	return (str);
}
