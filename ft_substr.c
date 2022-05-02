#include "libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	str = malloc(sizeof(char) * len + 1);
	if (!str || !s)
		return (NULL);
	while (s[i])
		i++;
	if (i <= start)
	{
		str[0] = '\0';
		return (str);
	}
	i = -1;
	while (++i < len && s[start + i])
		str[i] = s[start + i];
	str[i] = 0;
	return (str);
}