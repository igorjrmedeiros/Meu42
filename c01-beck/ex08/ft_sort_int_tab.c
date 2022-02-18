/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:39:48 by thabeck-          #+#    #+#             */
/*   Updated: 2022/02/10 04:13:30 by thabeck-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);
void	ft_iterate_swap(int *start_ptr, int *sec_ptr, int *end_ptr);

void	ft_sort_int_tab(int *tab, int size)
{
	int	*end_ptr;
	int	*start_ptr;
	int	*sec_ptr;
	int	count;

	count = 0;
	end_ptr = &tab[size - 1];
	while (count < size)
	{
		start_ptr = &tab[0];
		sec_ptr = &tab[1];
		ft_iterate_swap(start_ptr, sec_ptr, end_ptr);
		count++;
	}
}

void	ft_iterate_swap(int *start_ptr, int *sec_ptr, int *end_ptr)
{
	int	backup;

	backup = 0;
	while (sec_ptr <= end_ptr)
	{
		if (*sec_ptr < *start_ptr)
		{
			backup = *start_ptr;
			*start_ptr = *sec_ptr;
			*sec_ptr = backup;
		}
		start_ptr++;
		sec_ptr++;
	}
}
