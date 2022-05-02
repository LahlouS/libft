#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	c2;

	c2 = (unsigned char) c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == c2)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
