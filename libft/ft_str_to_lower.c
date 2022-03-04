#include "libft.h"

char	*ft_str_to_lower(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		str[i] = ft_to_lower(str[i]);
	return (str);
}
