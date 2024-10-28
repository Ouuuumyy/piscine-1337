/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:28:59 by oukadir           #+#    #+#             */
/*   Updated: 2024/07/29 14:51:09 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	res;

	i = 0;
	if (str[0] != '\0')
	{
		while (str[i] != '\0')
		{
			if (str[i] >= 32 && str[i] <= 127)
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
	char *c = "hello\nheh";

	printf("%d", ft_str_is_printable(c));
}
*/
