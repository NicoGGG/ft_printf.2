/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:00:37 by nguelfi           #+#    #+#             */
/*   Updated: 2017/10/29 17:52:27 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_conv		*init_conv(const char **format)
{
	t_conv	*conv;
	int		i;

	i = 0;
	conv = malloc(sizeof(t_conv));
	while (i < 4)
		conv->f[i++] = 0;
	if (**format == 'd')
		conv->f[2] = 1;
	else if (**format == 's')
		conv->f[1] = 1;
	else if (**format == 'c')
		conv->f[0] = 1;
	return (conv);
}

void		init_ptr_tab(int (*f[])(va_list))
{
	f[0] = &pf_putchar_conv;
	f[1] = &pf_putstr_conv;
	f[2] = &pf_putint;
}

int			convert_args(const char **format, va_list ap)
{
	t_conv	*conv;
	int		(*f[3])(va_list);
	int		i;

	i = 0;
	init_ptr_tab(f);
	conv = init_conv(format);
	while (conv->f[i] == 0 && i < 4)
		i++;
	if (i == 4)
		exit(1);
	free(conv);
	return (f[i](ap));
}