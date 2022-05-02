#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*chaine;

	
	i = -1;
	chaine = (char *) s;
	while (++i < n)
		chaine[i] = c;
	return (s);
}

