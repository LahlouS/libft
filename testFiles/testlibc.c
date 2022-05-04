/*FICHIER DE TEST POUR LA PARTIE 1 DE LIBFT*/

#include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <string.h>
#include <bsd/string.h>
#include <limits.h>


/*FT_STRDUP*/
// int main(void)
// {
// 	char *chaine1 = "fdsnfkjwnmd;lawkrjwenf   ";
// 	char *chaine2 = ft_strdup(chaine1);

// 	printf("chaine2 = %s\nchaine1 = %s\n", chaine2, chaine1);
// 	free(chaine2);
// 	return (0);
// }
/*FT_CALLOC*/

// int main(void)
// {
// 	char *test = (char *) ft_calloc(4, sizeof(char));
// 	int i = 0;

// 	while (i < 4)
// 	{
// 		printf("%d\n", test[i]);
// 		i++;
// 	}
// 	return (0);
// }

/*FT_ATOI*/
/*
int main(void)
{
	char *nptr = " \t\n\r\v\f  -214748364d7dsfwe";

	printf("%d\n", ft_atoi(nptr));
	printf("%d\n", atoi(nptr));
	printf("MIN = %d\nMAX = %d\n", INT_MIN, INT_MAX);
	return (0);
}*/

/*FT_TOUPPER && FT_TOLOWER*/
// int main(void)
// {
//     int i = 0;
//     char lowerstr[] = "je sUis une ChaiNe \\ ~~ ## de test";
//     char upperstr[] = "JE SUI;;  \\ | uNE CHAiNE DE TeST";
// 	char lowerstr1[] = "je sUis une ChaiNe \\ ~~ ## de test";
//     char upperstr1[] = "JE SUI;;  \\ | uNE CHAiNE DE TeST";

//     while(*(lowerstr + i))
//     {
//         lowerstr[i] = ft_toupper(lowerstr[i]);
//         lowerstr1[i] = toupper(lowerstr1[i]);
//         i++;
//     }
//     i = 0;
//      while(*(upperstr + i))
//     {
//     upperstr[i] = ft_tolower(upperstr[i]);
//     upperstr1[i] = tolower(upperstr1[i]);
//         i++;
//     }
//     printf("lowerstr: %s\nupperstr: %s\n", lowerstr, upperstr);
//     printf("lowerstr1: %s\nupperstr1: %s\n", lowerstr1, upperstr1);
// 	return (0);
// }

/*FT_STRRCHR*/
// int main(void)
// {
// 	char str[] = "je m'appelle sacha";
//     char c = 'p';
//     printf("ft_: %s\n   : %s\n", ft_strrchr(str, c), strrchr(str, c));
// 	return (0);
// }

/*FT_STRNSTR*/
// int main (void)
// {
//     char *big = "je suis une chaine de est";
//     char *little = "e ";

//    	printf("ft_: %s\n", ft_strnstr(big, little, 3));
//     printf("     %s\n", strnstr(big, little, 3));
//     return (0);
// }

/*FT_STRNCMP*/

// int main(void)
// {
//     char s1[] = "Je suis une Je suis une Je suiS";
//     //char s2[] = "Je suis une chaine de test";
//     printf("strlen%s\n", (s1 + 12));
//     printf("ft_ %d\n", ft_strncmp(s1, (s1 + 12), 19));
//     printf("std %d\n", strncmp(s1, (s1 + 12), 19));

//     return (0);
// }

/*FT_STRLEN*/
// int main(int ac, char **av)
// {
// 	(void)ac;
// 	printf("%ld\n", ft_strlen(*(av + 1)));
// 	printf("R %ld\n", strlen(*(av + 1)));
// 	return (0);
// }

/*FT_STRLCPY*/
// int main(void)
// {
//     char *str = "je suis une chaine de test";
//     char str2[100];
// 	char *str3 = "je suis une chaine de test";
// 	char str4[100];

//     printf("   %ld\n", strlcpy(str2, str, 10));
//     printf("   %s\n", str2);
//     printf("\n");
//     printf("ft %ld\n", ft_strlcpy(str4, str3, 10));
//     printf("ft %s\n", str4);

//     return (0);
// }

/*FT_STRLCAT*/
// int main(int ac, char **av)
// {
//     (void)ac;
//     char str[ft_strlen(chaine2)0] = "je m'appelle sacha";
//     char str2[ft_strlen(chaine2)0] = "je m'appelle sacha";
//     printf("   %ld\n", strlcat(str, *(av + 1),16));
//     printf("   %s\n", str);
//     printf("\n");
//     printf("ft %ld\n", ft_strlcat(str2, *(av + 1),16));
//     printf("ft %s\n", str2);

//     return (0);
// }

/*FT_STRCHR*/
// int main(void)//int ac, char **av)
// {
// 	//(void)ac;
// 	char c = 'p';
// 	char *str = "je m'appelle sacha";
//     printf("%p\n", strchr(str, c));
// 	printf("%c\n", *(strchr(str, c) - 1));
// 	printf("%p\n",ft_strchr(str, c));
// 	printf("%c\n", *(ft_strchr(str, c) - 1));
// 	return (0);
//}

/*FT_MEMSET*/
// int main(void)
// {
// 	char chaine[] = "JJJJJJJJJJJJJ";
// 	char chaine2[] = "JJJJJJJJJJJJJ";
// 	int n = INT_MIN;
// 	// int chaine[] = {0,1,2,3,4,5,8,7,8,9};
// 	// int chaine2[] = {0,1,2,3,4,5,8,7,8,9};
// 	// int n = 3;
// 	ft_memset(chaine, n, 1 * sizeof(char));
// 	memset(chaine2, n, 1 * sizeof(char));
//     printf("chaine + 6 %c\n", *(chaine + 6));
// 	for (int i = 0; i < (int)ft_strlen(chaine2); i++)
// 		printf("%d  ", chaine[i]);
// 	printf("\n");
// 	for (int i = 0; i < (int)ft_strlen(chaine2); i++)
// 		printf("%d  ",chaine2[i]);
// 	printf("\n");
// 	return (0);
// }

/*FT_MEMMOVE*/
// int main()
// {
// 	char	str[] = "je suis une chaine de test";
// 	char	str2[] = "je suis une chaine de test";
//     char    *op1 = (char *)memmove(str + 8, str, 18);
//     char    *op2 = (char *)ft_memmove(str2 + 8, str2, 18);
// 	// int		tab[] = {1200,20000,330000,450,5560,623};
// 	// int		tabdest[6];
// 	printf("memmove    %s\nft_memmove %s\n", op1, op2);
//     printf("memmove    %s\nft_memmove %s\n", str, str2);
// 	return 0;
// }

/*FT_MEMCPY*/
// int main()
// {
// 	char	str[] = "je suis une chaine de test";
// 	char	str2[] = "je suis une chaine de test";
//     char    *op1 = (char *)memcpy(str + 8, str, 8);
//     char    *op2 = (char *)ft_memcpy(str2 + 8, str2, 8);
// 	// int		tab[] = {1200,20000,330000,450,5560,623};
// 	// int		tabdest[6];
// 	printf("memcpy    %s\nft_memcpy %s\n", op1, op2);
//     printf("memcpy    %s\nft_memcpy %s\n", str, str2);
// 	return 0;
// }

/*FT_MEMCMP*/

// int main(void)
// {
// 	char *s1 = "Je suis une chaine de te ";
//     char *s2 = "Je suis une chaine de te p";

// 	printf("strlen %zu\n\n", strlen(s1));

// 	printf("    %d\n", memcmp(s1, s2, 0));	
// 	printf("ft_ %d\n", ft_memcmp(s1, s2, 0));
// 	return (0);
// }

/*FT_MEMCHR*/
// int main(void)
// {
// 	// char *str = "je suis une chaine de test";
// 	 int c = 8;
// 	int tab[] = {128, 65800, 85};
//     printf("%d\n", INT_MAX);

//     int *op = (int *)ft_memchr(tab, c, 3 * sizeof(int));
// 	printf("ft_ %d, {%d} %d\n", *(op - 1),*op, *(op + 1));

//     op = (int *)memchr(tab, c, 3 * sizeof(int));
//     printf("    %d, {%d} %d\n", *(op - 1),*op, *(op + 1));
// 	return (0);
// }

/*FT_BZERO*/

/*
int main(void)
{
	char	str[] = "je suis sacha";
	
	bzero((str + 6), 54);
	printf("str = %s\n", str + 8);
	return (0);
}*/
