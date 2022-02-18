/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcaldeir <bcaldeir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:20:20 by bcaldeir          #+#    #+#             */
/*   Updated: 2022/02/11 00:25:12 by bcaldeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_1;
	int	aux_2;

	aux_1 = *a / *b;
	aux_2 = *a % *b;
	*a = aux_1;
	*b = aux_2;
}
