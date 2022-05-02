#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	char				*str;
	unsigned int		i;

	i = -1;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str || !s1 || !s2)
		return (NULL);
	while (1)
	{
		if (*s1)
			str[++i] = *s1++;
		else if (*s2 && !(*s1))
			str[++i] = *s2++;
		else if (!(*s2) && !(*s1))
			break ;
	}
	str[++i] = 0;
	return (str);
}