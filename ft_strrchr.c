#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	i;
	char c2;

	c2 = c;
	i = -1;
	while (s[++i]);
	while(i >= 0)
	{
		if (s[i] == c2)
			return (((char *)(s + i)));
		i--;
	}
	return (NULL);
}