#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*str2;
	size_t	i;
	size_t	lenght;

	i = 0;
	lenght = ft_strlen(str);
	str2 = (char *)malloc(lenght + 1);
	if (!str2)
		return (0);
	while (i < lenght)
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
