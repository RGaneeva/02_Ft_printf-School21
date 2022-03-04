#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_to_lower(int i);
int		ft_putchar(int c);
int		ft_isdigit(int i);
int		ft_strlen(const char *s);
int		ft_putstrspec(char *str, int i);
void	*ft_memcpy(void *destin, const void *source, int lenght);
char	*ft_strdup(const char *s1);
char	*ft_itoa(int n);
char	*ft_itoau(unsigned int n);
char	*ft_str_to_lower(char *str);

#endif
