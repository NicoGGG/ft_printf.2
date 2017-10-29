/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainTest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nguelfi <nguelfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 15:53:09 by nguelfi           #+#    #+#             */
/*   Updated: 2017/10/29 19:13:18 by nguelfi          ###   ########.fr       */
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
	int	ret;

	ft_printf("/////TESTS SANS FLAGS/////\n\n");
	ft_printf("\ntest 1: %d\n", ft_printf("coucoutest\n"));
	printf("shoud be: %d\n", printf("coucoutest\n"));
	ft_printf("\ntest 2: %d\n", ft_printf("int 5: %d\n", 5));
	printf("should be: %d\n", printf("int 5: %d\n", 5));
	ft_printf("\ntest 3: %d\n", ft_printf("str: %s\n", "coucoutest"));
	printf("should be: %d\n", printf("str: %s\n", "coucoutest"));
	ft_printf("\ntest 4: %d\n", ft_printf("int 4: %d ; int 6: %d\n", 4, 6));
	printf("should be: %d\n", printf("int 4: %d ; int 6: %d\n", 4, 6));
	ft_printf("\ntest 5: %d\n", ft_printf("char: %c\n", 'o'));
	printf("should be: %d\n", printf("char: %c\n", 'o'));
	
	//ft_printf("test 6: %d\n", ft_printf("test erreur: %a\n", 3));
	//printf("should be: %d\n", printf("test erreur: %a\n", 3));

	ft_printf("\n\n/////FIN TESTS SANS FLAGS/////\n\n");
	ft_printf("\n\n/////TESTS COULEUR/////\n\n");
	ft_printf("test color: %d\n", ft_printf(ANSI_COLOR_RED "\ntest\n" ANSI_COLOR_RESET));
	printf("test color: %d\n", printf(ANSI_COLOR_RED "test\n" ANSI_COLOR_RESET) + 1);
	ft_printf("test int: %d\n", ft_printf(ANSI_COLOR_GREEN "\nint 5: %d\n" ANSI_COLOR_RESET, 5));
	printf("test int: %d\n", printf(ANSI_COLOR_GREEN "int 5: %d\n" ANSI_COLOR_RESET, 5) + 1);
	ft_printf("test int neg: %d\n", ft_printf("\nint -12: " ANSI_COLOR_CYAN "%d\n" ANSI_COLOR_RESET, -12));
	printf("test int neg: %d\n", printf("int -12: " ANSI_COLOR_CYAN "%d\n" ANSI_COLOR_RESET, -12) + 1);
	ft_printf("test no reset: %d\n", ft_printf("\nTEST no RESET " ANSI_COLOR_BLUE));
	ft_printf("SUITE test NO reset\n" ANSI_COLOR_RESET);
	printf("test no reset: %d\n", printf("TEST no RESET " ANSI_COLOR_BLUE) + 1);
	printf("SUITE test NO reset\n" ANSI_COLOR_RESET);
	ft_printf(ANSI_COLOR_RESET);

	ft_printf("\n\nFIN TESTS COULEUR/////\n\n");

	printf("%p\n", pft_putchar);

	return 0;
}
