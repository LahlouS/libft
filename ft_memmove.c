#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		buf[24000];
	size_t		i;

	i = -1;
	while (++i < n)
	{
		buf[i] = ((char *)src)[i];
	}
	i = -1;
	while (++i < n)
	{
		((char *)dest)[i] = buf[i];
	}
	return (dest);
}