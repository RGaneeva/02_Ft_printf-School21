#include "ft_printf.h"

int	ft_check_symb(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || \
	(c == 'd') || (c == 'i') || (c == 'u') || \
	(c == 'x') || (c == 'X') || (c == '%'));
}
