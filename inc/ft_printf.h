/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:50:21 by nguelfi           #+#    #+#             */
/*   Updated: 2017/10/29 18:57:39 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# define ANSI_COLOR_RED     "\x1b[31m"
# define ANSI_COLOR_GREEN   "\x1b[32m"
# define ANSI_COLOR_YELLOW  "\x1b[33m"
# define ANSI_COLOR_BLUE    "\x1b[34m"
# define ANSI_COLOR_MAGENTA "\x1b[35m"
# define ANSI_COLOR_CYAN    "\x1b[36;1m"
# define ANSI_COLOR_RESET   "\x1b[0m"

typedef struct	s_conv
{
	char		f[4];	
}				t_conv;

int		ft_printf(const char *format, ...);
int		convert_args(const char **format, va_list ap);
int		pf_putchar(unsigned char c);
int		pf_putchar_conv(va_list ap);
int		pf_putstr(char *str);
int		pf_putstr_conv(va_list ap);
int		pf_putstr_rev(char buf[]);
int		pf_putint(va_list ap);

#endif
