#include "ft_printf.h"

int	ft_split_u(unsigned int unsint)
{
	char	*uns_int;
	int		char_prntd;

	char_prntd = 0;
	unsint = (unsigned int)(4294967295 + 1 + unsint);
	uns_int = ft_itoau(unsint);
	char_prntd += ft_putstrspec(uns_int, ft_strlen(uns_int));
	free(uns_int);
	return (char_prntd);
}
