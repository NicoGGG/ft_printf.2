/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:00:37 by nguelfi           #+#    #+#             */
/*   Updated: 2017/11/06 19:56:20 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static const char format_conv[] = "diouxXfFeEgGaAcsb";

static const t_conv	g_conv[] =
{
	{'c', pf_putchar_conv},
	{'s', pf_putstr_conv},
	{'d', pf_putint},
	{'i', pf_putint},
	{'u', pf_putint},
	{0, NULL}
};

t_flag		get_flags(const char **format)
{
	int		i;
	t_flag	flag;
	char	*format_flags;

	i = 0;
	format_flags = pf_strdup("#-+0 ");
	while (**format && !pf_strchr(format_conv, **format))
	{
		while (**format && *format_flags && pf_strchr(format_flags, **format))
		{
			flag.flag[i] = **format;
			i++;
			(*format)++;
		}
		if (**format && pf_isdigit(**format))
			flag.width = pf_atoi(format);
		if (**format && **format == '.')
		{
			(*format)++;
			flag.precision = pf_atoi(format);
		}
	}
	if (!(**format))
		exit(1);
	return (flag);
}

int			convert_args(const char **format, va_list ap)
{
	int		i;
	t_flag	flag;

	i = 0;
	flag = get_flags(format);
	while (g_conv[i].format_conv && g_conv[i].format_conv != **format)
		i++;
	if (!g_conv[i].format_conv)
		exit(1);
	return (g_conv[i].f(ap, flag));
}
