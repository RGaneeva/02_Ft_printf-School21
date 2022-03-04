#include "libft.h"

static int	ft_symbcount(long int nbr)
{
	int	symbcount;

	symbcount = 0;
	if (nbr <= 0)
	{
		nbr = -nbr;
		symbcount = 1;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		symbcount++;
	}
	return (symbcount);
}

char	*ft_itoau(unsigned int n)
{
	int			i;
	char		*result;
	long int	numb;

	numb = (long int)n;
	i = ft_symbcount(numb);
	if (numb < 0)
		numb = -numb;
	result = malloc(sizeof(char) * i + 1);
	if (!result)
		return (0);
	result[i] = '\0';
	while (i > 0)
	{
		result[i - 1] = (numb % 10) + '0';
		numb = numb / 10;
		i--;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
