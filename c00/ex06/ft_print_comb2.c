/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:44:30 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/12 14:30:14 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define MAX_ARRANGE 9900

char	g_units = '0';
char	g_tens = '0';
char	g_hundreds = '0';
char	g_thousands = '0';
char	g_blank = ' ';
char	g_comma = ',';

void	ft_print_num(char thousands, char hundreds, char tens, char units)
{
	write(1, &thousands, 1);
	write(1, &hundreds, 1);
	write(1, &g_blank, 1);
	write(1, &tens, 1);
	write(1, &units, 1);
}

int	ft_check_num(char a, char b, char c, char d)
{
	int	value1;
	int	value2;

	value1 = (a * 100) + b;
	value2 = (c * 100) + d;
	if (value1 < value2)
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
		g_tens = '0';
		g_hundreds++;
	}
	if (g_hundreds > '9')
	{
		g_thousands++;
		g_hundreds = '0';
	}
	if (g_thousands > '9')
		g_thousands = '0';
}

void	ft_print_comb2(void)
{
	int	count;

	count = 0;
	while (count++ < MAX_ARRANGE)
	{
		ft_count_num();
		if (ft_check_num(g_thousands, g_hundreds, g_tens, g_units))
		{
			if ((count == MAX_ARRANGE))
				ft_print_num(g_thousands, g_hundreds, g_tens, g_units);
			else
			{
				ft_print_num(g_thousands, g_hundreds, g_tens, g_units);
				write(1, &g_comma, 1);
				write(1, &g_blank, 1);
			}
		}
		g_units++;
	}
}

int main()
{
	ft_print_comb2();
}