#include "ft_printf.h"

int	ft_split_x(unsigned int x, int low)
{
	char	*hexa;
	int		char_prntd;

	char_prntd = 0;
	x = (unsigned int)(4294967295 + 1 + x);
	hexa = ft_unslng_base((unsigned long int)x, 16);
	if (low == 1)
		hexa = ft_str_to_lower(hexa);
	char_prntd += ft_putstrspec(hexa, ft_strlen(hexa));
	free(hexa);
	return (char_prntd);
}
