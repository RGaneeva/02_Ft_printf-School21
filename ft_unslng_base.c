#include "ft_printf.h"

static char	*treat_base(unsigned long int unslng_save, int base,
char *rslt, int i)
{
	while (unslng_save != 0)
	{
		if ((unslng_save % base) < 10)
			rslt[i - 1] = (unslng_save % base) + 48;
		else
			rslt[i - 1] = (unslng_save % base) + 55;
		unslng_save /= base;
		i--;
	}
	return (rslt);
}

char	*ft_unslng_base(unsigned long int unslng, int base)
{
	char				*rslt;
	unsigned long int	unslng_save;
	int					i;

	rslt = 0;
	i = 0;
	unslng_save = unslng;
	if (unslng == 0)
		return (ft_strdup("0"));
	while (unslng != 0)
	{
		unslng /= base;
		i++;
	}
	rslt = malloc(sizeof(char) * (i + 1));
	if (!rslt)
		return (0);
	rslt[i] = '\0';
	rslt = treat_base(unslng_save, base, rslt, i);
	return (rslt);
}
