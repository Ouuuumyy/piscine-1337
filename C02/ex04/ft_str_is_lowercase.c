/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:42:06 by oukadir           #+#    #+#             */
/*   Updated: 2024/08/01 00:51:49 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (str[0] != '\0')
	{
		while (str[i])
		{
			if (str[i] >= 'a' && str[i] <= 'z' )
			{
				res = 1;
			}
			else
			{
				res = 0;
				break ;
			}
			i++;
		}
	}
	else
		res = 1;
	return (res);
}
/*
int main()
{
	char *c = "";
	printf("%d", ft_str_is_lowercase(c));
}*/
