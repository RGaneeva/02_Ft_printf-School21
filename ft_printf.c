#include "ft_printf.h"

int	ft_split_type(int i, va_list args)
{
	int	char_prntd;

	char_prntd = 0;
	if (i == 'c')
		char_prntd = ft_split_c(va_arg(args, int));
	else if (i == 's')
		char_prntd = ft_split_s(va_arg(args, char *));
	else if (i == 'p')
		char_prntd = ft_split_p(va_arg(args, unsigned long int));
	else if (i == 'd' || i == 'i')
		char_prntd = ft_split_di(va_arg(args, int));
	else if (i == 'u')
		char_prntd += ft_split_u(va_arg(args, unsigned int));
	else if (i == 'x')
		char_prntd += ft_split_x(va_arg(args, unsigned int), 1);
	else if (i == 'X')
		char_prntd += ft_split_x(va_arg(args, unsigned int), 0);
	else if (i == '%')
		char_prntd += ft_putstrspec("%", 1);
	return (char_prntd);
}

int	ft_split_spec(const char *spec, va_list args)
{
	int			i;
	int			char_prntd;

	i = 0;
	char_prntd = 0;
	while (1)
	{
		if (!spec[i])
			break ;
		else if (spec[i] == '%' && spec[i + 1])
		{
			i++;
			if (!ft_isdigit(spec[i]) && !ft_check_symb(spec[i]))
				break ;
			if (ft_check_symb(spec[i]))
				char_prntd += ft_split_type(spec[i], args);
			else if (spec[i])
				char_prntd += ft_putchar(spec[i]);
		}
		else if (spec[i] != '%')
			char_prntd += ft_putchar(spec[i]);
		i++;
	}
	return (char_prntd);
}

int	ft_printf(const char *input, ...)
{
	const char	*spec;
	va_list		args;
	int			char_prntd;

	if (!input)
		return (0);
	spec = ft_strdup(input);
	char_prntd = 0;
	va_start(args, input);
	char_prntd += ft_split_spec(spec, args);
	va_end(args);
	free((char *)spec);
	return (char_prntd);
}
