#include "ft_printf.h"

char	*pf_strcpy(char dst[], char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}