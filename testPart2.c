#include <stdio.h>
#include "libft.h"
#include <sys/types.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <limits.h>

        /*FT_SUBSTR*/

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	printf("%s\n", ft_substr(*(av + 1), 0, 50));
// 	return (0);
// }

        /*FT_STRJOIN*/

// int main(int ac, char **av)
// {
// 	(void) ac;
//         printf("--> *(av + 1) %p\n--> *(av + 2) %p\n", *(av + 1), *(av + 2));
// 	printf("test :\n%s\n", ft_strjoin(*(av + 1), *(av + 2)));
// 	return (0);
// }

        /*FT_STRTRIM*/

// int main (int ac, char **av)
// {
// 	(void)ac;
//         (void)av;
//         char *str = "sacha";
//         char *set = "sch";
// 	printf("%s\n", ft_strtrim(str, set));
// 	return (0);
// }

        /*FT_SPLIT*/
// int main (void)
// {
// 	char **strs = ft_split("////   je/// ///suis une/// ///    chaine/////  ////de test   ///blabla//", 'z');
// 	int i = 0;

// 	while (*(strs + i))
// 	{
// 		printf("%s\n", *(strs + i));
// 		i++;
// 	}
// 	return (0);
// }

        /*FT_ITOA*/

// int main(void)
// {
// 	printf("ici %s\n", ft_itoa(INT_MIN));
// 	printf("ici %s\n", ft_itoa(INT_MAX));
// 	printf("ici %s\n", ft_itoa(0));
// 	printf("ici %s\n", ft_itoa(12568));
// 	printf("ici %s\n", ft_itoa(-89632541));
// 	printf("ici %s\n", ft_itoa(-56892));
// 	printf("ici %s\n", ft_itoa(-0));
// 	return (0);
// }

        /*FT_STRMAPI*/

/*POUR TESTER*/
// char	ft_test(unsigned int index, char c)
// {
// 	c += (index - index) - 32;
// 	return (c);
// }

// int main(int ac, char **av)
// {
// 	(void)ac;
// 	char *str = *(av + 1);
//         printf("%p\n", str);
// 	printf("%s\n%s\n", ft_strmapi(str, &ft_test), str);
// 	return (0);
//}

        /*FT_STRITERI*/

// void	ft_test(unsigned int index, char *str)
// {
// 	if (str[index] >= 'a' && str[index] <= 'z')
// 		str[index] -= 32;
// }

// int main(int ac, char **av)
// {
// 	(void)ac;
// 	char *str = *(av + 1);
// 	printf("chaine original : %s\n", str);
// 	ft_striteri(str, NULL);
// 	printf("apres modifs    : %s\n", str);
// 	return (0);
// }

        /*FT_PUTCHAR_FD*/

// int main (int ac, char **av)
// {
// 	(void) ac;
// 	int fd;
// 	char *filename = *(av + 1);
// 	char c = *(*(av + 2) + 0);
// 	//char buf[10];

// 	if ((fd = open(filename, O_WRONLY)) < 0)
// 		printf("%s\n", strerror(errno));
// 	//else
// 		ft_putchar_fd(c, fd);
// 	close(fd);
// 	// if ((fd = open(filename, O_RDONLY)) < 0)
// 	// 	printf("%s\n", strerror(errno));
// 	// else
// 	// 	read(fd, buf, 10);
// 	// close(fd);
// 	// printf("%c\n", buf[0]);
// 	return (0);
// }

        /*FT_PUTSTR_FD*/

// int main (int ac, char **av)
// {
// 	(void) ac;
// 	int fd;
// 	char *filename = *(av + 1);
// 	char *str = *(av + 2);
// 	//char buf[100];
// 	//int	len;

// 	if ((fd = open(filename, O_WRONLY)) < 0)
// 		printf("%s\n", strerror(errno));
// 	else
// 		ft_putstr_fd(str, fd);
// 	close(fd);
// 	// if ((fd = open(filename, O_RDONLY)) < 0)
// 	// 	printf("%s\n", strerror(errno));
// 	// else
// 	// 	len = read(fd, buf, 100);
// 	// close(fd);
// 	// buf[len] = '\0';
// 	// printf("%s\n", buf);
// 	return (0);
// }

        /*FT_PUTENDL_FD*/

//  int main (int ac, char **av)
// {
// 	(void) ac;
//         (void) av;
// 	int fd;
// 	char *filename = "fichier.txt";
// 	char *str = "je suis une chaine de test";
// 	char buf[200];
// 	int	len;

// 	if ((fd = open(filename, O_WRONLY)) < 0)
// 		printf("%s\n", strerror(errno));
// 	else
// 		ft_putendl_fd(str, fd);
// 	close(fd);
// 	if ((fd = open(filename, O_RDONLY)) < 0)
// 		printf("%s\n", strerror(errno));
// 	else
// 		len = read(fd, buf, 200);
// 	close(fd);
// 	buf[len] = '\0';
// 	printf("%s", buf);
// 	return (0);
// }

        /*FT_PUTNBR_FD*/

// int main (int ac, char **av)
// {
// 	(void) ac;
// 	int fd;
// 	char *filename = *(av + 1);
// 	int n = INT_MIN;
// 	char buf[200];
// 	int	len;

// 	if ((fd = open(filename, O_WRONLY)) < 0)
// 		printf("%s\n", strerror(errno));
// 	else
// 		ft_putnbr_fd(n, fd);
// 	close(fd);
// 	if ((fd = open(filename, O_RDONLY)) < 0)
// 		printf("%s\n", strerror(errno));
// 	else
// 		len = read(fd, buf, 200);
// 	close(fd);
// 	buf[len] = '\0';
// 	printf("%s\n", buf);
// 	return (0);
// }