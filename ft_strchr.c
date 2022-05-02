#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char cdup;

	cdup = c;
	if (!s)
		return (NULL);
	while(*s)
	{
		if (*s == cdup)
			return ((char *)s);
		s++;
	}
	if (*s == cdup)
			return ((char *)s);
	return (NULL);
}