/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:54:29 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/16 22:58:40 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*tab_rev;
	int	aux;

	tab_rev = &tab[size - 1];
	while (tab <= tab_rev)
	{
		aux = *tab;
		*tab = *tab_rev;
		*tab_rev = aux;
		tab++;
		tab_rev--;
	}
}
