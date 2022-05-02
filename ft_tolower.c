#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
int main(void)
{
	int c = 65;

	printf("c = %c\n", c);
	printf("tolower: %c ft_tolower: %c\n", tolower(c), ft_tolower(c));
	return (0);
}*/