/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:28:02 by wborges-          #+#    #+#             */
/*   Updated: 2022/02/17 21:03:33 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strfind(char *s1, char *s2);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i])
		i++;
	if (i == 0)
		return (i);
	while (*str)
	{
		if ((*str == *to_find) && (ft_strfind(str, to_find) == 0))
			return (str);
		str++;
	}
	return ((void *)0);
}

int	ft_strfind(char *s1, char *s2)
{
	int	s;
	int	j;

	j = 0;
	while (s2[j])
		j++;
	while (j-- > 0)
	{
		s = (*s1 - *s2);
		s1++;
		s2++;
		if (s != 0)
			return (s);
	}
	printf("%d", s);
	return (s);
}


int main(void)
{
	char name1[30] = "Igor";
	char name2[30] = "Joaquim";

	//ft_strstr(name1, name2);
	printf(ft_strstr(name1, name2));
}
