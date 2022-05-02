/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slahlou <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:07:30 by slahlou           #+#    #+#             */
/*   Updated: 2022/05/02 14:09:18 by slahlou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

int	ft_isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (2048);
	else
		return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

/*
int main(int ac, char **av)
{
	(void) 	ac;
    (void) 	av;
	printf("%c = %d\n",*(*(av + 1) + 0) , ft_isalnum(*(*(av + 1) + 0)));
	printf("%c = %d\n", *(*(av + 1) + 1), ft_isalnum(*(*(av + 1) + 1)));
    printf("R %c = %d\n",*(*(av + 1) + 0) , isalnum(*(*(av + 1) + 0)));
	printf("R %c = %d\n", *(*(av + 1) + 1), isalnum(*(*(av + 1) + 1)));
	return 0;
}*/
