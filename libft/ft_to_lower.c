#include "libft.h"

int	ft_to_lower(int i)
{
	if (i >= 65 && i <= 90)
		i = i + 32;
	return (i);
}
