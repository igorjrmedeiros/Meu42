/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wborges- <wborges-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:47:02 by wborges-          #+#    #+#             */
/*   Updated: 2022/02/17 19:24:56 by wborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_test(int d, int s, int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ret;
	unsigned int	s;
	unsigned int	d;

	i = 0;
	s = 0;
	d = 0;
	while (src[s])
		s++;
	while (dest[d])
		d++;
	ret = ft_test(d, s, size);
	if (size == 0)
		return (s);
	else
	{
		while ((d < size -1) && (src[i] != '\0'))
			dest[d++] = src[i++];
	}
	dest [d] = '\0';
	return (ret);
}

int	ft_test(int d, int s, int size)
{
	int	ret;

	if (d <= size)
		ret = s + d;
	else
		ret = size + s;
	return (ret);
}
