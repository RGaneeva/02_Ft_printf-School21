#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int			ft_printf(const char *str, ...);
int			ft_split_type(int c, va_list args);
int			ft_split_spec(const char *spec, va_list args);
int			ft_check_symb(int c);
int			ft_split_c(char c);
int			ft_split_x(unsigned int x, int low);
int			ft_split_di(int i);
int			ft_split_p(unsigned long int unslng);
int			ft_split_s(char *str);
int			ft_split_u(unsigned int unsint);
char		*ft_unslng_base(unsigned long int unslng, int base);

#endif
