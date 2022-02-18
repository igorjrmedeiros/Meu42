/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:47:02 by wborges-          #+#    #+#             */
/*   Updated: 2022/02/17 20:55:18 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				s;

	i = 0;
	s = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{	
		s = s1[i] - s2[i];
		i++;
		if (s != 0)
			break ;
	}
	return (s);
}

