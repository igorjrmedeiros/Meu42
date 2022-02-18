/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:36:22 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/18 23:15:43 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;
	int	numeric;

	count = 0;
	numeric = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] >= '0' && str[count] <= '9')
			numeric++;
		else
			return (0);
		count++;
	}
	if (numeric > 0)
		return (1);
	else
		return (0);
}
