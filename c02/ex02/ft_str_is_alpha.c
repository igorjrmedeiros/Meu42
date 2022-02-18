/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:29:22 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/18 23:15:25 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;
	int	alpha;

	count = 0;
	alpha = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count])
	{
		if ((str[count] >= 'A' && str[count] <= 'Z')
			|| (str[count] >= 'a' && str[count] <= 'z'))
			alpha++;
		else
			return (0);
		count++;
	}
	if (alpha > 0)
		return (1);
	else
		return (0);
}
