#include "libft.h"

 int ft_isascii(int c)
 {
     if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
 }

/*
int main(void)
{
    char c = 48;

	printf("%c = %d\n", c , ft_isascii(c));
	printf("%c = %d\n", c , ft_isascii(c));
    printf("R %c = %d\n", c , isascii(c));
	printf("R %c = %d\n", c , isascii(c));
	return 0;
}*/