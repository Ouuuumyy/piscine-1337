/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oukadir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:16:01 by oukadir           #+#    #+#             */
/*   Updated: 2024/07/29 12:27:43 by oukadir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
 * #include <stdio.h>
 * */
int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	res;

	i = 0;
	if (str[0] != '\0')
	{
		while (str[i])
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
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
int main ()
{
	char *c = "1255***";
	printf("%d", ft_str_is_uppercase(c));
}
*/
