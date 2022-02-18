/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:42:15 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/18 23:20:56 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	count;
	int	lowercase;

	count = 0;
	lowercase = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			lowercase++;
		else
			return (0);
		count++;
	}
	if (lowercase > 0)
		return (1);
	else
		return (0);
}
