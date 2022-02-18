/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaldeir <bcaldeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:14:22 by bcaldeir          #+#    #+#             */
/*   Updated: 2022/02/11 00:18:43 by bcaldeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	end;

	count = 0;
	end = size - 1;
	while (count < end)
	{
		temp = tab[count];
		tab[count] = tab[end];
		tab[end] = temp;
		count++;
		end--;
	}
}
