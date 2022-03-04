#include "libft.h"

int	ft_putstrspec(char *str, int i)
{
	int	char_prntd;

	char_prntd = 0;
	while (str[char_prntd] && char_prntd < i)
		ft_putchar(str[char_prntd++]);
	return (char_prntd);
}
