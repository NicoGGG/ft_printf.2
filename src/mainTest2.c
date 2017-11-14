/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:53:09 by nguelfi           #+#    #+#             */
/*   Updated: 2017/11/14 16:52:22 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <wchar.h>
#include "ft_printf.h"

int			pft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int main(int argc, char const *argv[])
{
	if (argc == 0 && argv == NULL)
		return (1);

	ft_printf("/////TESTS SANS FLAGS/////\n\n");
	printf("tout seul:-%%\n");
	printf("flag #:-%#%\n");
	printf("flag 0:-%0%\n");
	printf("flag -:-%-.10%\n");
	printf("flag +:-%+%\n");
	printf("flag ' ':-% %\n");
	ft_printf("///// TEST WIDTH /////\n\n");
	printf("width 1:-%1%\n");
	printf("width 10:-%10%\n");

	ft_printf("///// TEST PRECISION ///// \n\n");
	printf("prec 1:-%.1%\n");
	printf("prec 10:-%.10%\n");

	ft_printf("/////TESTS SANS FLAGS/////\n\n");
	ft_printf("tout seul:-%%\n");
	ft_printf("flag #:-%#%\n");
	ft_printf("flag 0:-%0%\n");
	ft_printf("flag -:-%-.10%\n");
	ft_printf("flag +:-%+%\n");
	ft_printf("flag ' ':-% %\n");
	ft_printf("///// TEST WIDTH /////\n\n");
	ft_printf("width 1:-%1%\n");
	ft_printf("width 10:-%10%\n");

	ft_printf("///// TEST PRECISION ///// \n\n");
	ft_printf("prec 1:-%.1%\n");
	ft_printf("prec 10:-%.10%\n");
	return 0;
}
