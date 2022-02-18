/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:17:51 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/12 11:51:51 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_number[10];

int	ft_nb_digits(int number)
{
	int	digits;

	digits = 0;
	while (number > 0)
	{
		number /= 10;
		digits++;
	}
	while (number < 0)
	{
		number /= 10;
		digits++;
	}
	if (digits > 0)
		return (digits - 1);
	else
		return (0);
}

void	ft_print(char *number, int number_digits)
{
	write(1, number, number_digits);
}

void	ft_putnbr(int nb)
{
	int	mod;
	int	number_digits;

	number_digits = ft_nb_digits(nb);
	if (nb < 0)
		write(1, "-", 1);
	while (number_digits >= 0)
	{
		if (nb >= 0)
			mod = nb % 10;
		else
			mod = -(nb % 10);
		nb /= 10;
		g_number[number_digits] = mod + '0';
		number_digits--;
	}
	ft_print(g_number, 10);
}
