/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 11:09:02 by oukadir           #+#    #+#             */
/*   Updated: 2024/07/29 12:04:56 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	res;

	i = 0;
	if (str[i] != '\0')
	{
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	char *c = "afsf";
	printf("%d", ft_str_is_alpha(c));
}
*/
