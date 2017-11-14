#include "ft_printf.h"

int		pf_conv_percent(t_flag flag)
{
	int	ret;

	ret = 0;
	if (pf_strchr(flag->flag, ' '))
		ret += pf_putchar(' ');
	

}