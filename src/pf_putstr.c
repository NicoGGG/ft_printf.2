/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:25:43 by nguelfi           #+#    #+#             */
/*   Updated: 2017/11/06 20:02:21 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			pf_putstr_conv(va_list ap, t_flag flag)
{
	int		i;
	char	*str;
	//
	if (flag.width == 99)
		pf_putstr("dummy test\n");
	//
	str = (char *)va_arg(ap, char *);
	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int			pf_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}
