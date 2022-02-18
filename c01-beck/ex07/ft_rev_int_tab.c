/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 22:18:34 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/14 22:09:18 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);
void	ft_swapa(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	*end_ptr;

	end_ptr = &tab[size - 1];
	while (tab <= end_ptr)
	{
		ft_swap(tab, end_ptr);
		tab++;
		end_ptr--;
	}
}

void	ft_swapa(int *a, int *b)
{
	int	backup;

	backup = *a;
	*a = *b;
	*b = backup;
}
