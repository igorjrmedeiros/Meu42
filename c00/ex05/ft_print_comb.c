/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:33:11 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/12 11:51:42 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAX_ARRANGE 790

char	g_units = '0';
char	g_tens = '0';
char	g_hundreds = '0';

void	ft_print_num(char hundreds, char tens, char units, int is_last_number)
{
	char	comma;
	char	blank;

	comma = ',';
	blank = ' ';
	write(1, &hundreds, 1);
	write(1, &tens, 1);
	write(1, &units, 1);
	if (!is_last_number)
	{	
		write(1, &comma, 1);
		write(1, &blank, 1);
	}
}

int	ft_check_num(char a, char b, char c)
{
	if ((a == b) || (a == c) || (c == b))
		return (0);
	else if ((a < b) && (b < c))
		return (1);
	else
		return (0);
}

void	ft_count_num(void)
{
	if (g_units > '9')
	{
		g_tens++;
		g_units = '0';
	}
	if (g_tens > '9')
	{
		g_hundreds++;
		g_tens = '0';
	}
	if (g_hundreds > '9')
		g_hundreds = '0';
}

void	ft_print_comb(void)
{
	int	count;

	count = 0;
	while (count++ < MAX_ARRANGE)
	{
		ft_count_num();
		if (ft_check_num(g_hundreds, g_tens, g_units))
		{
			if ((count == MAX_ARRANGE))
				ft_print_num(g_hundreds, g_tens, g_units, 1);
			else
				ft_print_num(g_hundreds, g_tens, g_units, 0);
		}
		g_units++;
	}
}
