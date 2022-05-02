#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t  i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, s + i); // bon j'ai rajoute  + i au s parce aue je lai vu sur un git, si tu tape un ko tu saura pourquoi, car je trouve aue ca na aucun sens.
		i++;
	}
}
