/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:38:43 by nguelfi           #+#    #+#             */
/*   Updated: 2017/10/29 18:48:59 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		pf_putstr_rev(char buf[])
{
	int	i;
	int	ret;

	i = 0;
	while (buf[i])
		i++;
	ret = i;
	while (--i >= 0)
		write(1, &buf[i], 1);
	return (ret);
}
