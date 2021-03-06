/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:47:46 by nguelfi           #+#    #+#             */
/*   Updated: 2017/11/06 20:01:43 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			pf_putchar(unsigned char c)
{
	write(1, &c, 1);
	return (1);
}

int			pf_putchar_conv(va_list ap, t_flag flag)
{
	unsigned char	c;
	//
	if (flag.width == 99)
		pf_putstr("dummy test\n");
	//
	c = (unsigned char)va_arg(ap, int);
	write(1, &c, 1);
	return (1);
}
