#include "ft_printf.h"

int	ft_split_p(unsigned long int unslng)
{
	char	*pointer;
	int		char_prntd;

	char_prntd = 0;
	if (unslng == 0)
	{
		char_prntd += ft_putstrspec("0x0", 3);
		return (char_prntd);
	}
	pointer = ft_unslng_base(unslng, 16);
	pointer = ft_str_to_lower(pointer);
	char_prntd += ft_putstrspec("0x", 2);
	char_prntd += ft_putstrspec(pointer, ft_strlen(pointer));
	free(pointer);
	return (char_prntd);
}
