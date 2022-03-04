#include "ft_printf.h"

int	ft_split_s(char *str)
{
	int	char_prntd;

	char_prntd = 0;
	if (str == 0)
	{
		ft_putstrspec("(null)", 6);
		char_prntd = 6;
		return (char_prntd);
	}
	while (str[char_prntd])
	{
		ft_putchar(str[char_prntd]);
		char_prntd++;
	}
	return (char_prntd);
}
