/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:44:14 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/18 23:20:58 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	count;
	int	uppercase;

	count = 0;
	uppercase = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			uppercase++;
		else
			return (0);
		count++;
	}
	if (uppercase > 0)
		return (1);
	else
		return (0);
}
