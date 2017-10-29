/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:31:57 by nguelfi           #+#    #+#             */
/*   Updated: 2017/10/29 18:58:37 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			pf_putint(va_list ap)
{
	char	buf[12];
	int		nb;
	int		neg;
	int		i;

	nb = (int)va_arg(ap, int);
	i = 0;
	neg = 0;
	if (nb == -2147483648)
		return (pf_putstr("-2147483648"));
	if (nb < 0)
	{
		neg = '-';
		nb *= -1;
	}
	while (i < 12 && nb > 9)
	{
		buf[i++] = nb % 10 + '0';
		nb /= 10;
	}
	buf[i++] = nb + '0';
	buf[i++] = neg;
	buf[i] = 0;
	return (pf_putstr_rev(buf));
}
