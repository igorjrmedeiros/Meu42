/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:56:46 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/12 11:51:58 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define MAX_POS 9

char	g_number[MAX_POS];
char	g_zero;

void	print_number(char number[], int digits)
{
	while (digits > 0)
	{
		write(1, &number[digits - 1], 1);
		digits--;
	}
	write(1, "\n", 1);
}

void	ft_print_combn(int nb)
{
	int	pos;

	g_zero = '0';
	pos = MAX_POS;
	while (pos > 0)
	{
		g_number[pos - 1] = g_zero;
		pos--;
		g_zero++;
	}
	if ((nb > 0) && (nb < 10))
		print_number(g_number, nb);
}
