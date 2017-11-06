/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 18:44:02 by nguelfi           #+#    #+#             */
/*   Updated: 2017/11/06 19:35:13 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		pf_atoi(const char **str)
{
	int	result;
	int	i;
	int sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((**str > 7 && **str < 14) || **str == 32)
		(*str)++;
	if (**str == '-')
	{
		sign = -1;
		(*str)++;
	}
	else if (**str == '+')
		(*str)++;
	while (**str >= '0' && **str <= '9')
	{
		result = result * 10 + **str - '0';
		(*str)++;
	}
	return (result * sign);
}
