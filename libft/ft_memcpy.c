#include "libft.h"

void	*ft_memcpy(void *destin, const void *source, int lenght)
{
	int	i;

	if (!destin && !source)
		return (0);
	i = 0;
	while (i < lenght)
	{
		*(char *)(destin + i) = *(char *)(source + i);
		i++;
	}
	return (destin);
}
