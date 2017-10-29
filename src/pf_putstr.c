/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:25:43 by nguelfi           #+#    #+#             */
/*   Updated: 2017/10/29 18:58:28 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			pf_putstr_conv(va_list ap)
{
	int		i;
	char	*str;

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
