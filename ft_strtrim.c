#include "libft.h"

static int	ft_occurence(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_left_trim(char const *s1, char const *set)
{
	while (ft_occurence(set, *s1))
		s1++;
	return ((char *)s1);
}

static char	*ft_right_trim(char const *s1, char const *set)
{
	s1 += (ft_strlen(s1) - 1);
	while (ft_occurence(set, *s1))
		s1--;
	return ((char *)s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p1;
	char	*p2;
	char	*str;
	int		i;

	if (!s1 || !set)
		return (NULL);
	p1 = ft_left_trim(s1, set);
	p2 = ft_right_trim(s1, set);

	str = malloc(sizeof(char) * (p2 - p1) + 2); // + 2 car en faisant p1 - p2 j'exclue p1 et je veux aussi le \0
	if (!str)
		return (NULL);
	i = -1;
	while (p1 != p2)
		str[++i] = *(p1++);
	str[++i] = *p1;
	str[++i] = '\0';
	return (str);
}
/*ducoup normalement celle ci c'est bon car si les deux pointeurs p1 et p2 se croisent cela veut dire qu'il n'y 
a que des charset dans la chaine donc les deux pointeurs se retrouvent respectivement sur la fin et le debut de la chaine
donc p2 - p1 < 0 donc allocation memoire echoue donc retourn NULL
si il n'y a qu'un seul !charset alors les deux pointeurs sont place dessus, p2 - p1 = 0 donc on alloue 2 91 char + \0*/

