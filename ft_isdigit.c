#include "libft.h"

int ft_isdigit(int c)
{
    if (c <= '9' && c >= '0')
        return (2048);
    else
        return (0);
}
/*
int main(int ac, char **av)
{
	(void) 	ac;
    (void) 	av;
	printf("%c = %d\n",*(*(av + 1) + 0) , ft_isdigit(*(*(av + 1) + 0)));
	printf("%c = %d\n", *(*(av + 1) + 1), ft_isdigit(*(*(av + 1) + 1)));
    printf("R %c = %d\n",*(*(av + 1) + 0) , isdigit(*(*(av + 1) + 0)));
	printf("R %c = %d\n", *(*(av + 1) + 1), isdigit(*(*(av + 1) + 1)));
	return 0;
}*/