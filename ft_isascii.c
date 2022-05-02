/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:56:45 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 13:57:47 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
int main(void)
{
    char c = 48;

	printf("%c = %d\n", c , ft_isascii(c));
	printf("%c = %d\n", c , ft_isascii(c));
    printf("R %c = %d\n", c , isascii(c));
	printf("R %c = %d\n", c , isascii(c));
	return 0;
}*/
