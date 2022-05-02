#include "libft.h"

int ft_islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

int ft_isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}

int ft_isalpha(int c)
{
	if (ft_isupper(c) || ft_islower(c))
		return (1);
	else
		return (0); 
}
/*
int main(int ac, char **av)
{
	(void) 	ac;
	printf("%c = %d\n",*(*(av + 1) + 0) , ft_isalpha(*(*(av + 1) + 0)));
	printf("%c = %d\n", *(*(av + 1) + 1), ft_isalpha(*(*(av + 1) + 1)));
	return 0;
}*/