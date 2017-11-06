/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/13 17:06:17 by nguelfi           #+#    #+#             */
/*   Updated: 2017/11/06 18:45:15 by nguelfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*pf_strdup(const char *s1)
{
	int		i;
	char	*dup;

	i = 0;
	while (s1[i])
		i++;
	if ((dup = malloc(sizeof(char) * i + 1)) == NULL)
		return (NULL);
	while (i >= 0)
	{
		dup[i] = s1[i];
		i--;
	}
	return (dup);
}
