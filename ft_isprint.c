#include "libft.h"

int	ft_isprint(int c)
{
    if (c < 32 || c == 127)
		return (0);
    else
		return (16384);
}
/*
int main(void)
{
    char c = 127;
	printf("%c = %d\n", c, ft_isprint(c));
	printf("R %c = %d\n", c, isprint(c));
	return 0;
}*/