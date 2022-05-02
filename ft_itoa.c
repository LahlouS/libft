#include "libft.h"

static void	ft_nbr_to_buf(unsigned int nb, char *buf, int *index)
{
	int		indexcopy;
	indexcopy = *index;
	if (nb < 10)
	{
		buf[indexcopy] = (nb % 10) + 48;
		buf[indexcopy + 1] = '\0';
		(*index)++;
	}
	else
	{
		(*index)++;
		ft_nbr_to_buf(nb / 10, buf, index);
		buf[indexcopy] = (nb % 10) + 48;
	}
}

char *ft_itoa(int n)
{
	char	buf[15];
	char	*str;
	int		index;
	int		i;
	
	index = 0;
	i = -1;
	if (n < 0)
		ft_nbr_to_buf((n * -1), buf, &index);
	else
		ft_nbr_to_buf(n, buf, &index);
	if (n < 0)
	{
		buf[index] = '-';
		buf[++index] = '\0'; 
	}
	str = malloc(sizeof(char) * (index + 1));
	while (index >= 0)
		str[++i] = buf[--index];
	str[i] = '\0';
	return (str);
}

