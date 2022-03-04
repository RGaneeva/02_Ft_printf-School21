#include "ft_printf.h"

static int	max_int(int i, char	*d_i, int char_prntd)
{
	d_i = ft_itoa(i);
	char_prntd += ft_putstrspec(d_i, ft_strlen(d_i));
	free(d_i);
	return (char_prntd);
}

int	ft_split_di(int i)
{
	char	*d_i;
	int		char_prntd;

	char_prntd = 0;
	d_i = 0;
	if (i == -2147483648)
	{
		char_prntd = max_int(i, d_i, char_prntd);
		return (char_prntd);
	}
	if (i == 0)
	{
		ft_putstrspec("0", 1);
		char_prntd = 1;
		return (char_prntd);
	}
	if (i < 0)
	{
		ft_putstrspec("-", 1);
		i = i * (-1);
		char_prntd++;
	}
	char_prntd = max_int(i, d_i, char_prntd);
	return (char_prntd);
}
