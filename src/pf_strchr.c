/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:57:17 by nguelfi           #+#    #+#             */
/*   Updated: 2017/11/06 18:20:43 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*pf_strchr(const char *s, int c)
{
	char	t;
	char	*tmp;

	t = (char)c;
	tmp = (char *)s;
	while (*tmp)
	{
		if (*tmp == t)
			return (tmp);
		else
			tmp++;
	}
	if (t == 0)
		return (tmp);
	return (NULL);
}
