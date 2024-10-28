/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:27:11 by oukadir           #+#    #+#             */
/*   Updated: 2024/07/29 12:00:19 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i])
		{
			if (str[i] - '0' >= 0 && str[i] - '0' <= 9)
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
	char *c = "123";
	printf("%d", ft_str_is_numeric(c));
}
*/
