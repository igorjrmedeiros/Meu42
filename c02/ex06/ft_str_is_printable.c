/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:46:29 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/18 23:21:25 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;
	int	printable;

	count = 0;
	printable = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count])
	{
		if (str[count] >= 32 && str[count] <= 126)
			printable++;
		else
			return (0);
		count++;
	}
	if (printable > 0)
		return (1);
	else
		return (0);
}
