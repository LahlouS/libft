#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned int	slen;

	if (!s)
		return ;
	slen = ft_strlen(s);
	if (s)
		write(fd, s, slen);
}