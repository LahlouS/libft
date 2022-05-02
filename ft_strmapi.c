#include "libft.h"

char    *ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int	i;
	char			*str;
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