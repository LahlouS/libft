/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:32:46 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 14:32:51 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// static int	ft_get_len(const char *s, unsigned int start, size_t len)
// {
// 	unsigned int	i;

// 	i = 0;
// 	if (start > ft_strlen(s))
// 	{
// 		while (s[start])
// 		{
// 			i++;
// 			start++;
// 		}
// 		if (i < len)
// 			return (i);
// 		else 
// 			return (len);
// 	}
// 	else
// 		return (1);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*str;
// 	size_t	i;
// 	int		lenGood;

// 	i = 0;
// 	lenGood = ft_get_len(s, start, len);
// 	str = malloc(sizeof(char) * lenGood + 1);
// 	if (!str || !s)
// 		return (NULL);
// 	while (s[i])
// 		i++;
// 	if (i <= start)
// 	{
// 		str[0] = '\0';
// 		return (str);
// 	}
// 	i = -1;
// 	while (++i < len && s[start + i])
// 		str[i] = s[start + i];
// 	str[i] = 0;
// 	return (str);
// }

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
	{
		str = malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	end = beg;
	i = 0;
	while (s[end] && i < len)
	{
		end++;
		i++;
	}
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