/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 17:17:40 by oukadir           #+#    #+#             */
/*   Updated: 2024/08/15 04:01:23 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

int	calc_size(int size, char **strs, int sep_size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]) + sep_size;
		i++;
	}
	len -= sep_size;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = 0;
	if (size == 0)
	{
		res = malloc(1);
		res = "\0";
		return (res);
	}
	len = calc_size(size, strs, ft_strlen(sep));
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(res, strs[i++]);
		if (i < size)
			ft_strcat(res, sep);
	}
	return (res);
}
/*
int main()
{
	char *tab[4] ;
	tab[0] = "hello";
	tab[1] = "i";
	tab[2] = "am";
	tab[3] = "oum";
	printf("%s", ft_strjoin(4, tab, "  /"));
}
*/
